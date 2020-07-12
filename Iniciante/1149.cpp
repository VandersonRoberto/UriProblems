#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a , n,sum = 0;

    scanf("%i",&a);

    do
    {
      scanf("%i",&n);
    }while(n <= 0);

    for(int i = a ; i < a + n ; i++)
    {
        sum += i;
    }

    printf("%i\n",sum);

    return 0;
}
