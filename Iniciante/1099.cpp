#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

   int x,y;
   int maior,menor;
   int sum = 0;
   int n;

   scanf("%i",&n);

   for(int j = 0 ; j < n ; j++)
   {
       scanf("%i" "%i",&x,&y);
       sum = 0;
       if(x > y)
       {
           maior = x;
           menor = y;
       }
       else{
           maior = y;
           menor = x;
       }


       for(int i = menor + 1 ; i < maior ; i++)
       {
            if(i % 2 != 0)
            {
                sum+=i;
            }
       }

        printf("%i\n",sum);

   }
    return 0;
}
