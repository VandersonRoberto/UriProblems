#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int NUM , HORAS;
    double VALOR;

    scanf("%i" "%i",&NUM,&HORAS);
    scanf("%lf",&VALOR);

    printf("NUMBER = %i\nSALARY = U$ %.2lf\n",NUM,(HORAS * VALOR ));
    return 0;
}
