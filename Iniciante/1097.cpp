#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    int x = 1 , z = 7, y = 6 , w=5 ;

    for(int i = 0 ; i < 5; i++ )
    {
        printf("I=%i J=%i\n",x,z);
        printf("I=%i J=%i\n",x,y);
        printf("I=%i J=%i\n",x,w);
        x+=2;
        z+=2;
        y+=2;
        w+=2;
    }

    return 0;
}
