#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int A , B;

    scanf("%i" "%i",&A,&B);

    if(A > B)
    {
       printf("O JOGO DUROU %i HORA(S)\n",(24-A+B));
    }
    else if (B > A)
    {
       printf("O JOGO DUROU %i HORA(S)\n",(B-A));
    }
    else
    {
        printf("O JOGO DUROU %i HORA(S)\n",24);
    }
    return 0;
}
