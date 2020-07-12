#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
   int n,x;

   scanf("%i",&n);

   for(int i = 1; i <= n ; i++)
   {
       scanf("%i",&x);

       if(x == 0)
       {
          printf("NULL\n");
       }
       else if(x % 2 == 0 && x > 0)
       {
           printf("EVEN POSITIVE\n");
       }
       else if(x % 2 == 0 && x < 0)
       {
           printf("EVEN NEGATIVE\n");
       }
       else if(x % 2 != 0 && x < 0)
       {
          printf("ODD NEGATIVE\n");
       }
       else
         printf("ODD POSITIVE\n");

   }

   return 0;
}
