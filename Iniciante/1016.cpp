#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double S;

    scanf("%lf",&S);

    printf("%.0lf minutos\n",((S/30.0)*60.0));

    return 0;
}
