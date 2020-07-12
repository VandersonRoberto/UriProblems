#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int vP[5] , vI[5];
    int cP = 0 , cI = 0;
    int n;

    for(int i = 0 ; i < 15 ; i++)
    {
        scanf("%i",&n);

        if(cP == 5)
        {
            for(int j = 0 ; j < 5 ; j++)
            {
                printf("par[%i] = %i\n",j,vP[j]);
            }
            cP = 0;
        }
        if(cI == 5)
        {
            for(int j = 0 ; j < 5 ; j++)
            {
                printf("impar[%i] = %i\n",j,vI[j]);
            }
            cI = 0;
        }

        if(n%2 == 0)
        {
            vP[cP] = n;
            cP++;
        }
        else
        {
            vI[cI] = n;
            cI++;
        }
    }

    for(int j = 0 ; j < cI ; j++)
    {
       printf("impar[%i] = %i\n",j,vI[j]);
    }

    for(int j = 0 ; j < cP ; j++)
    {
        printf("par[%i] = %i\n",j,vP[j]);
    }

    return 0;
}
