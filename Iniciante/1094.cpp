#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    int n,aux;
    double qC = 0 , qR = 0 ,qS = 0 , qTotal = 0;
    char op;

    scanf("%i",&n);

    for(int i = 0 ; i < n ; i++)
    {

        scanf("%i %c",&aux,&op);
        fflush(stdin);

        if(op == 'C') {
            qC+=aux;
            qTotal+=aux;
        }
        else if (op == 'R')
        {
            qR+=aux;
            qTotal+=aux;
        }
        else if (op == 'S')
        {
            qS+=aux;
            qTotal+=aux;
        }
    }

    printf("Total: %0.lf cobaias\n",qTotal);
    printf("Total de coelhos: %0.lf\n",qC);
    printf("Total de ratos: %0.lf\n",qR);
    printf("Total de sapos: %0.lf\n",qS);
    printf("Percentual de coelhos: %.2lf %c\n",((qC*100)/qTotal),37);
    printf("Percentual de ratos: %.2lf %c\n",((qR*100)/qTotal),37);
    printf("Percentual de sapos: %.2lf %c\n",((qS*100)/qTotal),37);



    return 0;
}
