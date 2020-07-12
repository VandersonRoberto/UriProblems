#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int v[4];

    scanf("%i" "%i" "%i" "%i" ,&v[0],&v[1],&v[2],&v[3]);


    if(v[1] > v[2] && v[3] > v[0] && (v[2] + v[3]) > (v[0] + v[1]) && v[2] > 0 && v[3] > 0 && v[0] % 2 == 0)
    {
        printf("Valores aceitos\n");
    }
    else{
       printf("Valores nao aceitos\n");
    }

    return 0;
}
