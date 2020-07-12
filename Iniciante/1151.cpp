#include <iostream>
#include <stdio.h>

using namespace std;

int fibo(int n)
{
    if(n < 2)
    {
        return n;
    }
    else
    {
        return fibo(n-1) + fibo(n-2);
    }
}

int main()
{
    int n , ant = -1 , suce = 0;


    scanf("%i",&n);

    for(int i = 1 ; i <= n - 1; i++)
    {
        if(i == 1)
        {
            suce = 1;
            ant = 0;
            printf("%i %i ",ant,suce);
        }

        else
        {
            if(i < n - 1)
            {
                suce += ant;
                ant = suce - ant;
                printf("%i ",suce);
            }
            else
           {
                suce += ant;
                ant = suce - ant;
                printf("%i\n",suce);

           }
        }

    }

    return 0;
}
