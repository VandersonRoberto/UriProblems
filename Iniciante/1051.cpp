#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    double sal , aux, cont;

    scanf("%lf",&sal);

    sal = sal - 2000;

    if(sal <= 0 )
    {
       printf("Isento\n");
    }
    else if (sal <= 1000)
    {
       aux = sal * 0.08;
       printf("R$ %.2lf\n",aux);
    }
    else if (sal <= 2500)
    {
        aux = 1000 * 0.08;
        sal = sal - 1000;
        aux += sal * 0.18;

        printf("R$ %.2lf\n",aux);
    }
    else
    {
        aux = 1000 * 0.08;
        aux += 1500 * 0.18;
        sal = sal - 2500;
        aux += sal * 0.28;

        printf("R$ %.2lf\n",aux);
    }


    return 0;
}
