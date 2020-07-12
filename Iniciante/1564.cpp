#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    int n;

    while(scanf("%i",&n) != EOF)
    {
        if(n > 0)
          printf("vai ter duas!\n");
        else
          printf("vai ter copa!\n");
    }

    return 0;
}
