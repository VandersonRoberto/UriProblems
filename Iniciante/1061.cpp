#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {

    double a1, a2, a3, a4;
    double b1, b2, b3, b4;
    double c1=0, c2=0, c3=0, c4=0;
    char dia1[10];
    char dia2[10];

    scanf("%s %lf", dia1, &a1);
    scanf("%lf : %lf : %lf", &a2, &a3, &a4);
    scanf("%s %lf",dia2, &b1);
    scanf("%lf : %lf : %lf", &b2, &b3, &b4);

    c1 = b1-a1;

    if(a2<=24 && b2 <= 24)
    {
        if(a2 <= b2)
            c2 = b2-a2;
        else
        {
            c2 = (24-a2)+b2;
            c1--;
        }
    }
    if(a3<=60 && b3 <= 60)
    {
        if(a3 <= b3)
            c3 = b3-a3;
        else
        {
            c3 = (60-a3)+b3;
            c2--;
        }
    }
    if(a4<=60 && b4 <= 60)
    {
        if(a4 <= b4)
            c4 = b4-a4;
        else
        {
            c4 = (60-a4)+b4;
            c3--;
        }
    }

    printf("%.0lf dia(s)\n%.0lf hora(s)\n%.0lf minuto(s)\n%.0lf segundo(s)\n", c1, c2,c3,c4);

    return 0;
}

