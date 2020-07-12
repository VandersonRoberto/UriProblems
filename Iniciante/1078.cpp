#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
   int n;

   scanf("%i",&n);

   for(int i = 1; i <= 10 ; i++)
   {
       printf("%i x %i = %i\n",i,n,(n*i));
   }


    return 0;
}
