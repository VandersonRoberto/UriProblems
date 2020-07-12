#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int vet[3];

    while(scanf("%i",&vet[0]) != EOF)
    {
       scanf("%i %i",&vet[1],&vet[2]);

       if(vet[0] != vet[1] && vet[1] == vet[2])
       {
           printf("A\n");
       }

       else if( vet[1] != vet[0] && vet[0] == vet[2])
       {
           printf("B\n");
       }
       else if (vet[2] != vet[1] && vet[1] == vet[0])
       {
           printf("C\n");
       }
       else
          printf("*\n");

    }

    return 0;
}
