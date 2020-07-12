#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
  double A,B,C;

  scanf(" %lf",&A);

  while( A != 0)
  {
     scanf(" %lf %lf",&B ,&C);

     if(C == 100)
     {
           printf("%.0lf\n",floor(sqrt(A*B)));
     }
     else
     {
        double resp  = ((A*B) * 100) / C;
        printf("%.0lf\n",floor(sqrt(resp)));
     }

     scanf(" %lf",&A);
  }

  return 0;
}
