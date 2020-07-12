#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    double PI = 3.14159;
    double r;

    scanf("%lf",&r);

    printf("VOLUME = %.3lf\n",((4.0/3.0) * PI *(r*r*r)));

}
