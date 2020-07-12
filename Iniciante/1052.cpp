#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char meses[12][100] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    int id;

    scanf("%i",&id);

    printf("%s\n",meses[id - 1]);

    return 0;
}
