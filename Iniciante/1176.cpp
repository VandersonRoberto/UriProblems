#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    int n;
    unsigned long long int x[100],op;

    scanf("%i",&n);

    for(int i = 0 ; i < 100 ; i++)
    {
        if(i == 0)
        {
            x[i] = 0;
        }
        else if(i == 1)
        {
            x[i] = 1;
        }
        else
        {
           x[i] =  x[i-1] + x[i-2];
        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        scanf("%llu",&op);

        printf("Fib(%llu) = %llu\n",op,x[op]);
    }

    return 0;
}
