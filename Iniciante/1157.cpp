#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;

    scanf("%i",&n);

    for(int i = 1; i <= n ; i++)
    {

       if(n % i == 0)
       printf("%i\n",i);

    }

    return 0;
}
