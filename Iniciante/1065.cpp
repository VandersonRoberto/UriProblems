#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
   int vet[5], cont = 0;

   for(int i = 0 ; i < 5 ; i++)
   {
       scanf("%i",&vet[i]);

       if(vet[i] % 2 == 0)
       {
           cont++;
       }
   }

   printf("%i valores pares\n",cont);

    return 0;
}
