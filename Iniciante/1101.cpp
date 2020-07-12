#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int x ,y,maior,menor;
    int sum = 0;

    do
    {
        scanf("%i" "%i",&x,&y);
        sum = 0;

        if(x>0 && y >0)
        {
            if(x > y)
            {
                maior = x;
                menor = y;
            }
            else
            {
                maior = y;
                menor = x;
            }
            for(int i = menor ; i <= maior ; i++)
            {
                printf("%i ",i);
                sum+=i;
            }
            printf("Sum=%i\n",sum);
        }

    }while(x > 0 && y > 0);

    return 0;
}
