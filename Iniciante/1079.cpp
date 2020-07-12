#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
   int n;
   double N1,N2,N3,Media;
   scanf("%i",&n);

   for(int i = 0; i < n ; i++)
   {

      scanf("%lf" "%lf" "%lf" , &N1,&N2,&N3);
      Media = (N1*0.2) + (N2 * 0.3) + (N3*0.5);
      printf("%.1lf\n",Media);
   }

    return 0;
}
