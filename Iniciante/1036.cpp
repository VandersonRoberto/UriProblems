#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    double A , B , C , delta;

    scanf("%lf %lf %lf",&A,&B,&C);

    delta = (B * B) - 4 * (A * C);

    if(delta < 0 || A == 0)
      printf("Impossivel calcular\n");
    else
    {
       double x1 , x2;

       x1 = ((B * -1) + sqrt(delta)) / (2* A);
       x2 = ((B * -1) - sqrt(delta)) / (2 * A);

       printf("R1 = %.5lf\n" , x1);
       printf("R2 = %.5lf\n" , x2);

    }
    return 0;
}
