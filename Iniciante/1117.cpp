#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    double acum = 0 , aux;
    int cont = 0;

    do
    {
        scanf("%lf",&aux);

        if(aux >= 0 && aux <= 10)
        {
            acum+=aux;
            cont++;
        }
        else
            printf("nota invalida\n");


    }while(cont < 2);

    printf("media = %.2lf\n",(acum/2));

    return 0;
}
