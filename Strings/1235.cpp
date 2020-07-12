#include<string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){

    char str[100] , str2[100];
    int n;

    scanf("%i",&n);

    for(int k = 0;  k < n ; k++)
    {
        cin.ignore();
        scanf("%[^\n]",str);
        int tam = strlen(str);
        int i = 0;

        for(int j = (tam / 2) -1 ; j >= 0 ;  j--)
        {
            str2[i] = str[j];
            i++;
        }

        for(int z = tam - 1 ; z >= tam/2 ; z--)
        {
            str2[i] = str[z];
            i++;
        }


        str2[i] = '\0';

        printf("%s\n",str2);
    }




  return 0;
}
