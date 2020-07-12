#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    int n;
    int x,y , sum = 0;

    scanf("%i",&n);

    while(n > 0)
    {
        scanf("%i" "%i",&x,&y);

        sum = 0;
        for(int i = 0 ; i < y ; i++)
        {
            if(x % 2 == 0)
            {
                x++;
                sum += x;
            }
            else
            {

                sum += x;
            }

            x+=2;
        }

        printf("%i\n",sum);

        n--;
    }

    return 0;
}
