#include <string.h>
#include<stdio.h>

using namespace std;

void substring(int init , int limit , char str[] , char text[])
{
    for(int i = init ; i < limit;  i++){
        text[i - init] = str[i];
    }

    text[limit] = '\0';

}

int main()
{
    //freopen("saida.txt","w",stdout);

    char str[2000] , str2[2000];
    int n;

    scanf("%i",&n);

    for(int i = 0 ; i < n; i++)
    {
        scanf(" %s",str);
        scanf(" %s",str2);
        char aux[2000];
        int tam1 = strlen(str) , tam2 = strlen(str2);

        if(tam2 > tam1)
        {
            printf("nao encaixa\n");
        }
        else{
            substring(tam1 - tam2,tam1,str,aux);

            if(strstr(aux , str2) != NULL)
            {
                printf("encaixa\n");
            }
            else{
                printf("nao encaixa\n");
            }
        }
    }

}
