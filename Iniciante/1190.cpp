#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double mat[12][12];
    double acum = 0;
    int y2= 7, y1 = 4;
    char op;

    scanf("%c",&op);

    for(int i = 0 ; i < 12 ; i++)
    {
        for(int j = 0 ; j < 12 ; j++)
        {
            scanf("%lf",&mat[i][j]);
        }
    }
    for(int i = 7 ; i < 12 ; i++)
    {
        for(int j = 0 ; j < 12 ; j++)
        {

            if( j < y2 && j > y1)
                acum += mat[j][i];
        }
        y2++;
        y1--;
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
