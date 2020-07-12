#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int x;

    do
    {
      scanf("%i",&x);

      for(int i = 1 ; i <=x ; i++ )
      {
          if(i < x) printf("%i ",i);
          else printf("%i\n",i);
      }

    }while(x != 0);


    return 0;
}
