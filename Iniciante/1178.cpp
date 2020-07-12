#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double v[100];

    scanf("%lf",&v[0]);

    for(int j = 1 ; j < 100 ; j++)
    {
        v[j] =  v[j - 1] / 2;
    }

    for(int i = 0 ; i < 100 ; i++)
    {
        printf("N[%i] = %.4lf\n",i,v[i]);
    }

    return 0;
}
