#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int v[20],aux;

    for(int i = 0 ; i < 20 ; i++)
    {
       scanf("%i",&v[i]);
    }

    for(int j = 0 , k = 19 ; j < 10 ; j++ , k--)
    {
       aux = v[k];
       v[k] = v[j];
       v[j] = aux;
    }

    for(int i = 0 ; i < 20 ; i++)
    {
       printf("N[%i] = %i\n",i,v[i]);

    }

    return 0;
}
