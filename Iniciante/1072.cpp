#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
   int n ;
   int x , cIn = 0 , cOu = 0;

   scanf("%i",&n);

   for(int i = 0; i < n ; i++)
   {
     scanf("%i",&x);

     if(x >= 10 && x <= 20)
     {
         cIn++;
     }
     else
         cOu++;
   }

    printf("%i in\n",cIn);
    printf("%i out\n",cOu);

    return 0;
}
