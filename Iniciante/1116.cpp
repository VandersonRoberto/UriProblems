#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double x,y;
    int n ;

    scanf("%i",&n);

    for(int i = 0 ; i < n; i++)
    {
        scanf("%lf" "%lf",&x,&y);

        if(y == 0)
        {
           printf("divisao impossivel\n");
        }
        else
        {
            printf("%.1lf\n",(x/y));
        }

    }

    return 0;
}
