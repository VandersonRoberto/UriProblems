#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int cont = 0;
    double num = 0;

    for(int i = 0 ; i <6 ; i++ )
    {
        scanf("%lf",&num);

        if(num > 0) { cont++ ;}

    }

    printf("%i valores positivos\n",cont);

    return 0;
}
