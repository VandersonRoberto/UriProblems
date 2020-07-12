#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n,acum = 0;

    scanf("%i",&n);

    for(int i = n ; i > 0 ; i--)
    {
        if(i == n)
        {
            acum = i;
        }
        else
        {
            acum *= i;
        }
    }

    printf("%i\n",acum);

    return 0;
}
