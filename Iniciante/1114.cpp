#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int x = 2002 ,y;

    do
    {
        scanf("%i",&y);

        if(x != y)
        {
           printf("Senha Invalida\n");
        }
        else
        {
            printf("Acesso Permitido\n");
        }

    }while(x  != y);

    return 0;
}
