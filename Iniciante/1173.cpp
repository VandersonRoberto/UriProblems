#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int v[10];


    scanf("%i",&v[0]);

    for(int i = 1 ; i < 10 ; i++)
    {
        v[i] = v[i - 1] * 2;
    }


    for(int i = 0 ; i < 10 ; i++)
    {
       printf("N[%i] = %i\n",i,v[i]);
    }



    return 0;
}
