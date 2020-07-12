#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
   int vet[5], cImpar = 0 , cPar = 0 , cPos = 0,cNeg = 0;

   for(int i = 0 ; i < 5 ; i++)
   {
       scanf("%i",&vet[i]);

       if(vet[i] % 2 == 0)
       {
           cPar++;
       }
       else
           cImpar++;
       if(vet[i] < 0 )
       {
           cNeg++;
       }
       if (vet[i] > 0)
           cPos++;
   }

   printf("%i valor(es) par(es)\n",cPar);
   printf("%i valor(es) impar(es)\n",cImpar);
   printf("%i valor(es) positivo(s)\n",cPos);
   printf("%i valor(es) negativo(s)\n",cNeg);


    return 0;
}
