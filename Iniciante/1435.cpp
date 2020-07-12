#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n ;
    int mat[100][100];
    int cont = 1;
    int aux = 1;
    int meio = 0;

    scanf("%i",&n);

    while(n > 0)
    {
        aux = 1;

        if( n % 2 == 0)
        {
            while(aux <= n/2)
            {
                for(int i = aux - 1 ; i < n - aux + 1 ; i++)
                {
                    mat[aux - 1][i] = aux;
                }

                for(int i = aux - 1 ; i < n - aux + 1 ; i++)
                {
                    mat[i][aux - 1] = aux;
                }

                for(int i = aux - 1 ; i < n - aux + 1 ; i++)
                {
                    mat[n - aux][i] = aux;
                }

                for(int i = aux - 1 ; i < n - aux + 1 ; i++)
                {
                    mat[i][n - aux] = aux;
                }

                aux++;
            }
        }
        else
        {
           meio = (n / 2) + 1;

            while(aux <= n/2)
            {
                for(int i = aux - 1 ; i < n - aux + 1 ; i++)
                {
                    mat[aux - 1][i] = aux;
                }

                for(int i = aux - 1 ; i < n - aux + 1 ; i++)
                {
                    mat[i][aux - 1] = aux;
                }

                for(int i = aux - 1 ; i < n - aux + 1 ; i++)
                {
                    mat[n - aux][i] = aux;
                }

                for(int i = aux - 1 ; i < n - aux + 1 ; i++)
                {
                    mat[i][n - aux] = aux;
                }

                aux++;
            }

            mat[meio - 1][meio - 1] = meio;

        }
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                if( j == n -1){
                    printf("%3d",mat[i][j]);

                }
                else
                    printf("%3d ",mat[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        scanf("%i",&n);

    }

    return 0;
}
