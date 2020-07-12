#include <stdio.h>
#include <stdlib.h>
#include <string.h>


using namespace std;

bool Compare (char str1[5] , char str2[5])
{
   int erro = 0;
   int tamanho  = strlen(str1);

   for(int i = 0; i < tamanho ; i++)
   {
       if(str1[i] != str2[i])
            erro++;


       if(erro == 2)
         return false;
   }

   return true;
}


int main()
{
    char palavra[5];
    int n ;

    scanf("%i",&n);

    while(n > 0)
    {
        scanf("%s",palavra);

        if(Compare(palavra , "one"))
           printf("1\n");
        else if(Compare(palavra, "two"))
            printf("2\n");
        else if(Compare(palavra,"three"))
            printf("3\n");

        n--;
    }



}
