#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
   int n ;

   scanf("%i",&n);

   for(int i = 1; i <= n ; i++)
   {
       if(i % 2 == 0)
       {
           printf("%i^2 = %i\n",i,(i*i));
       }
   }

   return 0;
}
