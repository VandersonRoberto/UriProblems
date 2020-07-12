#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int cod[] = {1,2,3,4,5};
    float preco[] = {4.0,4.5,5.0,2.0,1.5};
    int c , qtd;

    scanf("%i" "%i",&c,&qtd);

    printf("Total: R$ %.2f\n",(preco[c - 1] * qtd));

    return 0;
}
