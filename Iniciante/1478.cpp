#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n ;
    int mat[100][100];
    int cont = 1;
    int aux = 1;
    int aux2 = 0;

    scanf("%i",&n);

    while(n > 0)
    {
        aux = 0;
        while(aux < n)
        {
            cont = aux + 1;

            if(aux == 0)
            {
              for(int i = 0 ; i < n ; i++)
              {
                  mat[aux][i] = cont;
                  cont++;
              }
              cont = aux + 1;
              for(int i = 0 ; i < n ; i++)
              {
                  mat[i][aux] = cont;
                  cont++;
              }
            }
            else
            {
               aux2 = 0;
               for(int i = 1 ; i < n ; i++)
               {
                  cont = mat[aux][i-1];

                  if(cont == 1)
                  {
                      aux2 = 1;
                  }
                  if(aux2 == 1)
                  {
                      mat[aux][i] = mat[aux][i-1] +1;
                  }
                  else if(aux2 == 0)
                  {
                      mat[aux][i] = mat[aux][i-1] - 1;
                  }

               }

            }
           aux++;
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
