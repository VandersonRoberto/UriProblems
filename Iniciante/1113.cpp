#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int x ,y,maior,menor;

    do
    {
        scanf("%i" "%i",&x,&y);


        if(x != y)
        {
            if(x > y)
            {
               printf("Decrescente\n");
            }
            else
            {
                printf("Crescente\n");
            }
        }

    }while(x  != y);

    return 0;
}
