#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
   int a[1000];
   int x , cont = 0;

   scanf("%i",&x);

   for(int i = 0 ; i < 1000 ; i++)
   {
       if(cont == x){
       	  cont = 0;
       	  a[i] = cont;
       	  cont++;
       	  printf("N[%i] = %i\n",i,a[i]);
       }

       else{
         a[i] = cont;
         cont++;
         printf("N[%i] = %i\n",i,a[i]);
       }

   }

   return 0;
}
