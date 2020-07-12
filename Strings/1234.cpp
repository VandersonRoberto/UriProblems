#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
   char str1[50] , str2[50];


   while(scanf("%[^\n]",str1) != EOF)
   {
       cin.ignore();
       int tam = strlen(str1);
       int cont = 0;

       for(int i = 0 ; i < tam ; i++)
       {
           if( cont % 2 == 0)
           {
               if( str1[i] >= 'A' && str1[i] <= 'Z'){
                 str2[i] = str1[i];
                 cont++;
               }
               else if ( str1[i] >= 'a' && str1[i] <= 'z'){
                 str2[i] = str1[i] - 32;
                 cont++;
               }
               else{
                str2[i] = str1[i];
               }

           }
          else
           {
               if( str1[i] >= 'A' && str1[i] <= 'Z'){
                 str2[i] = str1[i] + 32;
                 cont++;
               }
               else if( str1[i] >= 'a' && str1[i] <= 'z'){
                 str2[i] = str1[i];
                 cont++;
               }
               else{
                str2[i] = str1[i];
               }
           }
       }

       str2[tam] = '\0';

       printf("%s\n",str2);

   }

   return 0;
}
