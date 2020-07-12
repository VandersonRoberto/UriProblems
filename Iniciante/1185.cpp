#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    double mat[12][12];
    double acum = 0;
    int lin = 11;
    char op;

    scanf("%c",&op);

    for(int i = 0 ; i < 12 ; i++)
    {
        for(int j = 0 ; j < 12 ; j++)
        {
            scanf("%lf",&mat[i][j]);

            if( j < lin)
            {
                acum += mat[i][j];
            }
        }
        lin--;
    }

    if(op == 'S')
    {
        printf("%.1lf\n",acum);
    }
    else if(op == 'M')
    {
        printf("%.1lf\n",acum/66);
    }

    return 0;
}
