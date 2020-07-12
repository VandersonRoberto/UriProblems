#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int X , Z , cont = 0,acum = 00;

    scanf("%i",&X);

    do
    {
       scanf("%i",&Z);

    }while(Z <= X);

    do
    {
        acum += X;
        X++;
        cont++;
    }while(acum <= Z);


     printf("%i\n",cont);

    return 0;
}
