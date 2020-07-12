#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

   int j;

   for(int i = 0 ; i < 6 ; i++)
   {
       if(i == 0)
       {
           scanf("%i",&j);

           if(j % 2 == 0)
           {
               j++;
           }
           else
           {
               j+=2;

           }
       }
       printf("%i\n",j);
       j+=2;

   }

    return 0;
}
