#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    int x = 1 , cont=0;

    for(int i = 0 ; i < 5; i++ )
    {
        printf("I=%i J=7\n",x);
        printf("I=%i J=6\n",x);
        printf("I=%i J=5\n",x);
        x+=2;

    }

    return 0;
}
