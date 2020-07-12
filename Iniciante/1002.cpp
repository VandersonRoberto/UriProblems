#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    double r , pi;
    pi = 3.14159;

    scanf("%lf",&r);

    printf("A=%.4lf\n",(r * r * pi));

    return 0;
}