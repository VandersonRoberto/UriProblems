#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
   float preco, mediaKg = 0 , mediaPreco = 0;
   char frutas[100000];
   int n, dias[400] , aux = 0 , tam , ind = -1, qtd;

   scanf("%i",&n);

   qtd = n;

   while(n > 0)
   {
       aux = 0;
       ind++;
       frutas[0] = '\0';

       scanf("%f",&preco);
       mediaPreco += preco;

       scanf(" %[^\n]",frutas);

       tam = strlen(frutas);

       for(int i = 0 ; i < tam ; i++){
            if(frutas[i] == ' ')
             aux++;
       }


       dias[ind] = aux + 1;

       n--;
   }

   for(int i = 0 ; i < qtd ; i++){
     printf("day %i: %i kg\n",i+1,dias[i]);
     mediaKg += dias[i];
   }

   printf("%.2f kg by day\n",mediaKg/qtd);
   printf("R$ %.2f by day\n",mediaPreco/qtd);


    return 0;
}
