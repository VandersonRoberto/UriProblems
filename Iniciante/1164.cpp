#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    long int x, aux = 0 , cont = 0;

    scanf("%i",&n);

    for(int i = 0 ; i < n ; i++)
    {
        scanf("%li",&x);
        aux = 0;
        cont = 1;
        while(aux < x)
        {
            aux += cont;
            cont++;
        }
        if(aux == x && x > 1)
        {
            printf("%li eh perfeito\n",x);
        }
        else
            printf("%li nao eh perfeito\n",x);
    }


    return 0;
}
