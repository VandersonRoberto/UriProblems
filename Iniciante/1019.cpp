#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int segundos;
    int qH = 0, qM = 0 , qS = 0;

    scanf("%i",&segundos);

    if(segundos >= 3600)
    {
        qH = segundos / 3600;
        segundos =  segundos - (qH * 3600);
    }

    if(segundos >= 60)
    {
        qM = segundos / 60;
        segundos -= qM * 60;
    }

    printf("%i:%i:%i\n",qH,qM,segundos);

    return 0;
}
