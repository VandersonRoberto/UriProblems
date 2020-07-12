#include <iostream>
#include <stdio.h>
using namespace std;

int BubbleSort(int *v);

int main()
{
    int vet[3],aux[3];

    scanf("%i" "%i" "%i",&vet[0],&vet[1],&vet[2]);

    for(int i = 0 ; i < 3; i++)
    {
        aux[i] = vet[i];
    }

    BubbleSort(vet);

    for(int i = 0 ; i < 3; i++)
    {
        printf("%i\n",vet[i]);
    }
    printf("\n");

    for(int i = 0 ; i < 3; i++)
    {
        printf("%i\n",aux[i]);
    }

    return 0;
}

int BubbleSort(int *v)
{
    bool flag = true;
    int aux;

    while(flag)
    {
        flag = false;
        for(int i=0 ; i<2 ; i++ )
        {
            if(*(v+i) > *(v+i+1))
            {
                aux = *(v+i);
                *(v+i) = *(v+i+1);
                *(v+i+1) = aux;
                flag = true;
            }
        }
    }
}
