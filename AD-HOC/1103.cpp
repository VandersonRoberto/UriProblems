#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int minutos(int horas , int minutos)
{
    return horas * 60 + minutos;
}

int main()
{
    int h1 , h2 , m1 , m2;

    scanf("%i %i %i %i",&h1,&m1,&h2,&m2);

    while(!(h1 == 0 && h2 == 0 && m1 == 0 && m2 == 0))
    {
      int x = 0;

      if( h1 < h2)
         x = minutos(h1,m1) - minutos(h2,m2);
      else if(h1 == h2 && m1 <= m2)
         x = m2 - m1;
      else{
        x = minutos(h1,m1) - minutos(h2 + 24 ,m2);
      }

      printf("%i\n", abs(x) );
      scanf("%i %i %i %i",&h1,&m1,&h2,&m2);

    }


    return 0;
}
