#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int x,y;

    do
    {
        scanf("%i" "%i",&x,&y);

        if(x > 0 &&  y > 0)
        {
           printf("primeiro\n");
        }
        else if(x < 0 && y > 0)
        {
            printf("segundo\n");
        }
        else if(x < 0 && y < 0)
        {
            printf("terceiro\n");
        }
        else if(x > 0 && y < 0)
        {
            printf("quarto\n");
        }

    }while(x != 0 && y != 0);

    return 0;
}
