#include <stdio.h>
#include <stdlib.h>
using namespace std;

main()
{
    int n , x , y;

    scanf("%i",&n);

    for(int i = 0 ; i < n; i ++)
    {
        scanf("%i %i",&x ,&y );

        printf("%i\n",(x+y));
    }
}
