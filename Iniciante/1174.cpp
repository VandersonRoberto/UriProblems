#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

int main()
{
    double a[100];

    for(int i = 0 ; i < 100; i++)
    {
        scanf("%lf",&a[i]);
    }

    for(int i = 0 ; i < 100; i++)
    {
        if(a[i] <= 10)
        	cout << "A[" << i << "] = " << a[i] << endl;

    }

   return 0;

}
