#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    double Sal , Aumento;

    scanf("%lf",&Sal);

    if(Sal <= 400.00)
    {
        Aumento = Sal * 0.15;
        Sal += Aumento;

        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %c\n",Sal,Aumento,37);
    }
    else if(Sal >= 400.01 && Sal <= 800.00)
    {
        Aumento = Sal * 0.12;
        Sal += Aumento;

        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %c\n",Sal,Aumento,37);
    }
    else if(Sal >= 400.01 && Sal <= 800.00)
    {
        Aumento = Sal * 0.12;
        Sal += Aumento;

        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %c\n",Sal,Aumento,37);
    }
    else if(Sal >= 800.01 && Sal <= 1200.00)
    {
        Aumento = Sal * 0.10;
        Sal += Aumento;

        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %c\n",Sal,Aumento,37);
    }
    else{
        Aumento = Sal * 0.4;
        Sal += Aumento;

        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %c\n",Sal,Aumento,37);
    }

    return 0;
}
