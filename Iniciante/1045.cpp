#include <iostream>
#include <stdio.h>

void BubbleSort(double *v);

using namespace std;

int main()
{
    double vet[3];
    bool flag = 0;

    scanf("%lf" "%lf" "%lf" ,&vet[0],&vet[1],&vet[2]);

    BubbleSort(vet);

    if(vet[0] >= (vet[1] + vet[2]))
    {
        printf("NAO FORMA TRIANGULO\n");
        flag = 1;
    }
    if((vet[0] * vet[0]) == ((vet[1] * vet[1])+(vet[2] * vet[2])) && flag != 1)
    {
        printf("TRIANGULO RETANGULO\n");
    }
    if((vet[0] * vet[0]) > ((vet[1] * vet[1])+(vet[2] * vet[2]))&& flag != 1)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if((vet[0] * vet[0]) < ((vet[1] * vet[1])+(vet[2] * vet[2]))&& flag != 1)
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(vet[0] == vet[1] && vet[1] == vet[2]&& flag != 1)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(vet[0] == vet[1] || vet[1] == vet[2] || vet[0] == vet[2] && flag != 1)
    {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}

void BubbleSort(double *v)
{
    bool flag = true;
    double aux;

    while(flag)
    {
        flag = false;
        for(int i=0 ; i<2 ; i++ )
        {
            if(*(v+i) < *(v+i+1))
            {
                aux = *(v+i);
                *(v+i) = *(v+i+1);
                *(v+i+1) = aux;
                flag = true;
            }
        }
    }
}
