#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int x;
    int menor = 0 , pos  = 0;

    scanf("%i",&x);

    int vet[x];

    for(int i = 0 ; i < x ; i++)
    {
        scanf("%i",&vet[i]);

        if(i == 0)
        {
            menor = vet[i];
            pos = i;
        }
        else if(menor > vet[i])
        {
            menor = vet[i];
            pos = i;
        }
    }

    printf("Menor valor: %i\n",menor);
    printf("Posicao: %i\n",pos);


    return 0;
}
