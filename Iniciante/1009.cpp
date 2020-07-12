#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char nome[100];
    double sal , venda;

    scanf("%s",nome);
    scanf("%lf" "%lf" , &sal , &venda);

    printf("TOTAL = R$ %.2lf\n",(sal + (venda * 0.15)));

    return 0;
}
