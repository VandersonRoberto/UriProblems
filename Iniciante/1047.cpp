#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int HIni , HFin , MIni , Mfin;
    int H , M , aux;

    scanf("%i" "%i" "%i" "%i",&HIni,&MIni,&HFin,&Mfin);

    if(MIni > 0){
		MIni = 60 - MIni;
		HIni++;	
    }

    if(HIni < HFin)
    {
      H = HFin - HIni;
    }
    else if(HIni > HFin)
    {
      H = 24 - (HIni - HFin);
    }
    else
       H = 24;

    M = MIni + Mfin;

    if(M == 60)
    {
        M = 0;
        H++;
    }
    else if (M > 60) {
       H += M / 60;
       M = M % 60;
    }

    printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n",H,M);

    return 0;
}
