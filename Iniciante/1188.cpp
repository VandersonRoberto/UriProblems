#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    double mat[12][12];
    double acum = 0;
    int x2= 7, x1 = 4;
    char op;

    scanf("%c",&op);

    for(int i = 0 ; i < 12 ; i++)
    {
        for(int j = 0 ; j < 12 ; j++)
        {
            scanf("%lf",&mat[i][j]);

            if( j > x1 && j < x2 && i >= 7)
            {
                acum += mat[i][j];
            }
        }
        if(i >= 7)
        {
           x1--;
           x2++;
        }
    }

    if(op == 'S')
    {
        printf("%.1lf\n",acum);
    }
    else if(op == 'M')
    {
        printf("%.1lf\n",acum/30);
    }

    return 0;
}
