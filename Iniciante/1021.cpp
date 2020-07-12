#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double var, aux;
    int n[13], i;
    double notas[]={0.01,0.05,0.10,0.25,0.50,1.0,2.0,5.0,10.0,20.0,50.0,100.0};
    double m=0;
    double u=0;

    scanf("%lf", &var);
    aux = var;

    for(i=0;i<12;i++)
        n[i] = 0;

    if(aux >= 100.0)
    {
        n[0]=aux/100.0;
        aux -=100*n[0];
    }
    if(aux >= 50.0)
    {
        n[1]=aux/50.0;
        aux -=50*n[1];
    }
    if(aux>= 20.0)
    {
        n[2]=aux/20.0;
        aux -=20*n[2];
    }
    if(aux >= 10.0)
    {
        n[3]=aux/10.0;
        aux -=10*n[3];
    }
    if(aux >= 5.0)
    {
        n[4]=aux/5.0;
        aux -=5*n[4];
    }
    if(aux >= 2.0)
    {
        n[5]=aux/2.0;
        aux -=2*n[5];
    }
    if(aux >= 1.0)
    {
        n[6]=aux/1.0;
        aux -=1*n[6];
    }
    if(aux >= 0.50)
    {
        n[7]=aux/0.5;
        aux -=0.5*n[7];
    }
    if(aux >= 0.25)
    {
        n[8]=aux/0.25;
        aux -=0.25*n[8];
    }
    if(aux >= 0.10)
    {
        n[9]=aux/0.10;
        aux -=0.10*n[9];
    }
    if(aux >= 0.05)
    {
        n[10]=aux/0.05;
        aux -=0.05*n[10];
    }
    if(aux >= 0.01)
    {
        u=aux/0.0100;

    }
    int z=11;
    printf("NOTAS:\n");
    for(i=0;i<6;i++)
    {
        printf("%i nota(s) de R$ %.2lf\n", n[i],notas[z]);
        z--;
    }
    printf("MOEDAS:\n");
    printf("%i moeda(s) de R$ %.2lf\n", n[i],notas[z]);
    z--;

    for(i=7;i<11;i++)
    {
        printf("%i moeda(s) de R$ %.2lf\n", n[i],notas[z]);
        z--;
    }
    printf("%.0lf moeda(s) de R$ %.2lf\n", u,notas[z]);


    return 0;
}
