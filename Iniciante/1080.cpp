#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
   int x , pos , maior;

   for(int i = 1; i <= 100 ; i++)
   {
       scanf("%i", &x);

       if(i == 1)
       {
          maior = x;
          pos = i;
       }
       else if (x > maior)
       {
          maior = x;
          pos = i;
       }
   }

   printf("%i\n%i\n",maior,pos);

    return 0;
}
