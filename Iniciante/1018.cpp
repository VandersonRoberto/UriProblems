#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
   int num;
   int qCem = 0,qCinq = 0,qVinte = 0,qDez = 0,qCinco = 0,qDois = 0,qUm = 0;

   scanf("%i",&num);

   printf("%i\n",num);


   if(num >= 100)
   {
       qCem = (num / 100);
       num -= (100 * qCem);
   }
   if(num >= 50)
   {
       qCinq = (num / 50);
       num -= ( qCinq * 50);
   }
   if(num >= 20)
   {
      qVinte = (num / 20);
       num -= (qVinte * 20);
   }
   if(num >= 10)
   {
      qDez = (num / 10);
       num -= (qDez * 10);
   }
   if(num >= 5)
   {
      qCinco = (num / 5);
       num -= (qCinco * 5);
   }
   if(num >= 2)
   {
      qDois = (num / 2);
       num -= (qDois * 2);
   }
   if(num >= 1)
   {
      qUm = (num / 1);
   }

   printf("%i nota(s) de R$ 100,00\n",qCem);
   printf("%i nota(s) de R$ 50,00\n",qCinq);
   printf("%i nota(s) de R$ 20,00\n",qVinte);
   printf("%i nota(s) de R$ 10,00\n",qDez);
   printf("%i nota(s) de R$ 5,00\n",qCinco);
   printf("%i nota(s) de R$ 2,00\n",qDois);
   printf("%i nota(s) de R$ 1,00\n",qUm);




    return 0;
}
