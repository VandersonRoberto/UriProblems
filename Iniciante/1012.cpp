#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    double A,B,C;
    double PI = 3.14159;

    scanf("%lf" "%lf" "%lf" ,&A,&B,&C);

    printf("TRIANGULO: %.3lf\n",((A*C)/2.0));
    printf("CIRCULO: %.3lf\n",(PI * C * C));
    printf("TRAPEZIO: %.3lf\n",((C * (A+B))/ 2));
    printf("QUADRADO: %.3lf\n", B*B);
    printf("RETANGULO: %.3lf\n",A*B);

    return 0;
}
