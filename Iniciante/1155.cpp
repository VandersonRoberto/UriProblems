#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double acum = 1;


    for(int i = 2 ; i <= 100 ; i++)
    {
        acum += (1.0/i);
    }

    printf("%.2lf\n",acum);

    return 0;
}
