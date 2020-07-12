#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int cA = 0 , cG = 0 ,cD = 0;
    int op;

    do
    {
      scanf("%i",&op);

      if(op == 1)
      {
          cA++;
      }
      else if( op == 2)
      {
          cG++;
      }
      else if( op == 3)
      {
          cD++;
      }


    }while(op != 4);


    printf("MUITO OBRIGADO\n");
    printf("Alcool: %i\n",cA);
    printf("Gasolina: %i\n",cG);
    printf("Diesel: %i\n",cD);


    return 0;
}
