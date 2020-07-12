#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int n , cont = 0;
    long int A, B;
    double pA , pB;

    scanf("%i",&n);

    for(int i = 0 ; i < n ; i++)
    {
        scanf("%li" "%li" "%lf" "%lf",&A,&B,&pA,&pB);
        cont = 0;
        while(A <= B && cont < 101)
        {
            A += floor(A * (pA / 100));
            B += floor(B * (pB / 100));
            cont++;
        }

        if(cont < 101)
        {
            printf("%i anos.\n",cont);
        }
        else
            printf("Mais de 1 seculo.\n");
    }

    return 0;
}
