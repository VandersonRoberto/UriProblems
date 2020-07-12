#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int x , y , aux = 1;

    scanf("%i" "%i",&x,&y);

    while(aux <= y)
    {
        for(int i = 0 ; i < x ; i++)
        {
            if(i < x-1)
            {
                printf("%i ",aux);
                aux++;
            }
            else{
                printf("%i\n",aux);
                aux++;
            }
        }
    }

    return 0;
}
