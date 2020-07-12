#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int dias;
    int qAno = 0 , qMeses = 0;

    scanf("%i",&dias);

    if(dias >= 365)
    {
        qAno = dias / 365;
        dias -= qAno * 365;
    }
    if(dias >= 30)
    {
        qMeses = dias / 30;
        dias -= qMeses * 30;
    }

    printf("%i ano(s)\n",qAno);
    printf("%i mes(es)\n",qMeses);
    printf("%i dia(s)\n",dias);

    return 0;
}
