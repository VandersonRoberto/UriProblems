#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    double x = 0 , z = 1, y = 2 , w=3 ;

    for(int i = 0 ; i < 11; i++ )
    {
        if( i == 0 || i == 5 || i == 10)
        {
            printf("I=%.0lf J=%.0lf\n",x,z);
            printf("I=%.0lf J=%.0lf\n",x,y);
            printf("I=%.0lf J=%.0lf\n",x,w);
            x+=.2;
            z+=.2;
            y+=.2;
            w+=.2;

        }
        else
        {
            printf("I=%.1lf J=%.1lf\n",x,z);
            printf("I=%.1lf J=%.1lf\n",x,y);
            printf("I=%.1lf J=%.1lf\n",x,w);
            x+=.2;
            z+=.2;
            y+=.2;
            w+=.2;
        }

    }

    return 0;
}
