#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double vet[6] , acum = 0;
    int cont = 0;

    for(int i = 0 ; i < 6 ; i++)
    {
        scanf("%lf",&vet[i]);

        if(vet[i] > 0 )
        {
            cont++;
            acum += vet[i];
        }
    }

    printf("%i valores positivos\n%.1lf\n",cont,(acum/cont));

    return 0;
}
