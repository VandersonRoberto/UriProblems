#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int vet[3] ,maior;

    scanf("%i" "%i" "%i" , &vet[0],&vet[1],&vet[2]);

    for(int i = 0 ; i < 3 ; i++)
    {
        if(i == 0)
        {
            maior = vet[i];
        }
        else
        {
            if(vet[i] > maior)
            {
                maior = vet[i];
            }
        }
    }

    printf("%i eh o maior\n",maior);

    return 0;
}
