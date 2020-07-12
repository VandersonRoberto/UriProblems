#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int x , y , maior , menor , sum = 0;

    scanf("%i" "%i",&x,&y);

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

    for(int i = menor ; i <= maior ;i++)
    {
        if(i % 13 != 0)
        {
            sum+= i;
        }
    }

    printf("%i\n",sum);

    return 0;
}
