#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int v[10];

    for(int i = 0 ; i < 10 ; i++)
    {
        scanf("%i",&v[i]);
        if(v[i] <= 0 ) { v[i] = 1; }
    }

    for(int i = 0 ; i < 10 ; i++)
    {
       printf("X[%i] = %i\n",i,v[i]);
    }

    return 0;
}
