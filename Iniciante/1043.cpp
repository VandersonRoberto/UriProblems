#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double A ,B ,C;

    scanf("%lf" "%lf" "%lf",&A,&B,&C);

    if(((B-C)*1) < A && A < (B+C) )
    {
        printf("Perimetro = %.1lf\n",(A+B+C));
    }
    else if(((A-C)*1) < B && B < (A+C) )
    {
        printf("Perimetro = %.1lf\n",(A+B+C));
    }
    else if(((A-B)*1) < C && C < (A+B) )
    {
        printf("Perimetro = %.1lf\n",(A+B+C));
    }
    else
    {
       printf("Area = %.1lf\n",(((A+B)*C)/2));
    }

    return 0;
}
