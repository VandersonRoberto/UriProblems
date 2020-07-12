#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double n,acum = 0,cont = 0;

    do
    {
      scanf("%lf",&n);

      if(n >= 0)
      {
          acum += n;
          cont++;
      }

    }while(n >= 0);

    printf("%.2lf\n",(acum / cont));

    return 0;
}
