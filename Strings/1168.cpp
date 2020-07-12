#include<stdio.h>
#include <string.h>
#include <map>

using namespace std;

int main()
{
   map<char,int> firstMap ;
   char str[1000];
   int n , cont;

   firstMap['1'] = 2;
   firstMap['2'] = 5;
   firstMap['3'] = 5;
   firstMap['4'] = 4;
   firstMap['5'] = 5;
   firstMap['6'] = 6;
   firstMap['7'] = 3;
   firstMap['8'] = 7;
   firstMap['9'] = 6;
   firstMap['0'] = 6;

   scanf("%i",&n);


   for(int i = 0 ; i < n; i++)
   {
       scanf(" %s",str);

       cont = 0;
       int tam = strlen(str);

       for(int j = 0; j < tam ; j++)
       {
         cont += firstMap[str[j]];

       }
       printf("%i leds\n",cont);

   }

}
