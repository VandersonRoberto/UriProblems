#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n , aux;
    long int x;

    scanf("%i",&n);

    for(int i = 0 ; i < n ; i++)
    {
        scanf("%li",&x);
        aux = 0;

        for(int j = 1 ; j <=x ; j++ )
        {
           if(x % j == 0)
           {
               aux++;
           }

        }

        if(aux == 2)
        {
            printf("%li eh primo\n",x);
        }
        else
            printf("%li nao eh primo\n",x);

    }


    return 0;
}
