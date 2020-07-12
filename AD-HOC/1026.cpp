#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    long long int resp = 0;
    long long int n;
    long long int n2;

    resp = 6 ^ 9;

    while(scanf("%lli",&n) != EOF && scanf("%lli",&n2) != EOF)
    {
        resp = n ^ n2;

        printf("%lli\n",resp);
    }


    return 0;
}
