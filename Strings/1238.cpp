#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
    char str1[50] , str2[50];
    int n , tam , i = 0;

    scanf("%i",&n);

    for(int k = 0; k < n; k++)
    {
        i = 0;
        char result[100];

        scanf("%s",str1);
        scanf("%s",str2);

        int tam = strlen(str1);

        if(tam > strlen(str2))
        {
               tam = strlen(str2);

               for(int j = 0 ; j < tam ; j++)
               {
                    result[i] = str1[j];
                    i++;
                    result[i] = str2[j];
                    i++;
               }
               for(int j = tam ; j < strlen(str1); j++ )
               {
                   result[i] = str1[j];
                    i++;
               }
        }
        else if(tam < strlen(str2)){

            for(int j = 0 ; j < tam ; j++)
               {
                    result[i] = str1[j];
                    i++;
                    result[i] = str2[j];
                    i++;
               }
               for(int j = tam ; j < strlen(str2); j++ )
               {
                   result[i] = str2[j];
                    i++;
               }

        }else{
            for(int j = 0 ; j < tam ; j++)
            {
                result[i] = str1[j];
                i++;
                result[i] = str2[j];
                i++;
            }
        }

        result[i] = '\0';

        printf("%s\n",result);
    }
}
