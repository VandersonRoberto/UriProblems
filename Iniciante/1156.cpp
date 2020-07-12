#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double acum = 1;
    double x = 3.0 ,y = 2.0;

    for(int i = 2 ; i <= 20 ; i++)
    {
        acum += (x/y);
        x+=2;
        y*=2;
    }

    printf("%.2lf\n",acum);

    return 0;
}
