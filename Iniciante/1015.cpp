#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2;
    double dist;
    scanf("%i" "%i" "%i" "%i" ,&x1 ,&y1 ,&x2 ,&y2);

    dist = sqrt(pow((x2 - x1),2.0) + pow((y2 - y1),2.0));

    printf("%.4lf\n",dist);
    return 0;
}

