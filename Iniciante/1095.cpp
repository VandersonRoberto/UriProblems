#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    int x = 1 , y = 60;

    for(int i = 0 ; i <= 12; i++ )
    {
        printf("I=%i J=%i\n",x,y);
        x+=3;
        y-=5;
    }


    return 0;
}
