#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    int n;
    int sum = 0;

    do
    {
        scanf("%i",&n);

        if(n != 0)
        {
            sum = 0;

            for(int i = 0 ; i < 5 ; i++)
            {

                if(i == 0 && n % 2 != 0)
                {
                    n++;
                    sum = n;
                }
                else if(n % 2 == 0)
                {
                   sum += n;

                }
                n+=2;
            }

            printf("%i\n",sum);
        }
    }while(n != 0);

    return 0;
}
