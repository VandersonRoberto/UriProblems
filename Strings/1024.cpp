#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{

    int n, ind = 0, tam ;
    char str[100000] , aux[100000];


    scanf("%i",&n);

    while(n > 0)
    {
        scanf(" %[^\n]",str);
        tam = strlen(str);


        for(int i = 0 ; i < tam ; i++)
        {
            if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
                str[i]+=3;
        }

        for(int i = tam - 1 ; i >= 0 ; i--)
        {
            aux[ind] = str[i];
            ind++;
        }
        aux[ind] = '\0';

        for(int i = tam / 2 ; i < tam ; i++)
        {
           aux[i] -= 1;
        }

        printf("%s\n",aux);


        n--;
        str[0] = '\0';
        aux[0] = '\0';
        ind = 0;
    }

    return 0;
}
