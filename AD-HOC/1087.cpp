#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int x,y,x1,y1;
    scanf("%i %i %i %i",&x,&y,&x1,&y1);
    while(!(x==0 && y==0 && x1==0 && y1==0))
    {
        if(x==x1 && y==y1)
            printf("0\n");
        else if(abs(x1-x) == abs(y1-y) || x==x1 ||y==y1)
            printf("1\n");     
        else
            printf("2\n");
        scanf("%i %i %i %i",&x,&y,&x1,&y1);
    }
    return 0;
}