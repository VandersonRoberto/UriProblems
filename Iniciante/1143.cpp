#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int x = 1, n;

    scanf("%i",&n);

    for(int i = 0 ; i < n ; i++)
    {
        printf("%i %i %i\n",x,(x*x),(x*x*x));
        x++;

    }

    return 0;
}
