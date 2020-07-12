#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

int Comparacao(const void* a,const void* b);

int m;

int main()
{

    int v[10001];
    int n;

    scanf("%i %i",&n,&m);

    while(n > 0 && m > 0 )
    {

      for(int i = 0 ; i < n ; i++)
      {
          scanf("%i",&v[i]);
      }

      std::qsort(v,n,sizeof(int),Comparacao);

      printf("%i %i\n",n,m);
      for(int i = 0 ; i < n; i++)
      {
          printf("%i\n",v[i]);
      }
      scanf("%i %i",&n,&m);
    }

    printf("%i %i\n",n,m);

    return 0;
}


int Comparacao(const void* a,const void* b)
{

    int* a1 = (int*)a;
    int* b1 = (int*)b;


    if(*a1 % m < *b1 % m)
    {
        return -1;
    }
    if(*a1 % m > *b1 % m)
    {
        return 1;
    }


    if(*a1 % 2 != 0 && *b1 % 2 == 0 && *a1 % m == *b1 % m)
    {
        return -1;
    }


    if(*a1 % 2 == 0 && *b1 % 2 != 0 && *a1 % m == *b1 % m)
    {
        return 1;
    }

    if(*a1 % 2 != 0 && *b1 % 2 != 0 && *a1 % m == *b1 % m)
    {
        if (*a1 < *b1) return 1;
        else if (*a1 == *b1) return 0;
        else return -1;
    }

    if(*a1 % 2 == 0 && *b1 % 2 == 0 && *a1 % m == *b1 % m)
    {
        if (*a1 < *b1) return -1;
        else if (*a1 == *b1) return 0;
        else return 1;
    }


}
