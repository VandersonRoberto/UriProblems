#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int  hoNumber;
    hoNumber = 0;

    scanf("%li",&hoNumber);

    for (int i = 0; i < hoNumber - 1; i++)
    {
        printf("Ho ");
    }

    printf("Ho!\n");
}
