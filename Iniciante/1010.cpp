#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int Cod1 , qtd1 , qtd2, Cod2;
    double V1 , V2 , total;

    scanf("%i" "%i" "%lf",&Cod1,&qtd1,&V1);
    scanf("%i" "%i" "%lf",&Cod2,&qtd2,&V2);

    total = (V1 * qtd1) + (V2 * qtd2);

    printf("VALOR A PAGAR: R$ %.2lf\n",total);

    return 0;
}
