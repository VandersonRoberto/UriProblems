#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    while(1)
    {
        char number;
        char c;
        bool zeroEsquerda = true;
        bool entro = false;
        scanf("%c ",&number);
        if(number == '0') break;
        while((c = getc(stdin)) != '\n')
        {
            if(zeroEsquerda && c != '0' && c != number)
            {
                zeroEsquerda = false;
            }
            if(!zeroEsquerda && c != number)
            {
                printf("%c",c);
                entro = true;
            }

        }
        if(!entro){ printf("0");}
        printf("\n");
    }

    return 0;
}
