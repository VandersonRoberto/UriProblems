#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    char tipo[100];
    char reino[100];
    char cat[100];

    scanf("%s",tipo);
    scanf("%s",reino);
    scanf("%s",cat);

    if(strcmp(tipo,"vertebrado") == 0)
    {
        if(strcmp(reino,"ave") == 0)
        {
            if(strcmp(cat,"carnivoro") == 0)
            {
                printf("aguia\n");
            }
            else
               printf("pomba\n");
        }
        else
        {
            if(strcmp(cat,"onivoro") == 0)
            {
                printf("homem\n");
            }
            else
              printf("vaca\n");
        }
    }
    else if(strcmp(tipo,"invertebrado") == 0)
    {
        if(strcmp(reino,"inseto") == 0)
        {
            if(strcmp(cat,"hematofago") == 0)
            {
                printf("pulga\n");
            }
            else
               printf("lagarta\n");
        }
        else
        {
            if(strcmp(cat,"hematofago") == 0)
            {
                printf("sanguessuga\n");
            }
            else
              printf("minhoca\n");
        }
    }

    return 0;
}
