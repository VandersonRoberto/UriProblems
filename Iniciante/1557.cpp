#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

int numberDigits(long long int n )
{
    int i = 0;
    long long int number = n;

    while(n != 0)
    {
        n = n / 10;
        i++;
    }

    return (number == 0) ? 0 : i;
}

void space(int t)
{
    for(int i = 0 ; i < t ; i++)
        printf(" ");
}


int main()
{
    int n;
    long long atual;

    scanf("%i",&n);

    while(n != 0)
    {

        int digits= numberDigits(pow(pow(2,n-1),2));

        atual = 0;
        for(int i = 0 ; i < n; i++)
        {
            if( n > 2)
            {
                atual = pow(2,i);

                space(digits - numberDigits(atual));

            }
            for(int j = 0 ; j < n ; j++)
            {
                if(j == 0 && n != 1)
                {
                    atual = pow(2,i);
                    printf("%lli",atual);
                    space(digits - numberDigits(atual * 2) + 1);

                }
                else if(j == 0){
                    atual = pow(2,i);
                    printf("%lli",atual);
                }
                else if(j < n - 1){
                    atual *= 2;
                    printf("%lli",atual);
                    space(digits - numberDigits(atual * 2) + 1);

                }else{
                    atual *= 2;
                    printf("%lli",atual);
                }
            }
            printf("\n");
        }

        printf("\n");
        scanf("%i",&n);
    }


    return 0;
}
