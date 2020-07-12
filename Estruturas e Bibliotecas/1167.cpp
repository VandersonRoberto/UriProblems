#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;


typedef struct No{
   char nome[50];
   int numero;
   No *prior;
   No *next;
};

typedef struct lista{
  No *inicial;
  int count;
};

No* NovoNoh();
lista* NovaLista();
lista* AdicionarNo(lista *l ,char nom[50] , int x);
No* Josephus(lista *l);
void Remove(lista *l , No *n);

int main()
{
    int n, numero;
    char nome[50];

    scanf("%i",&n);

    while( n != 0)
    {
        lista *l = NovaLista();

        for(int i = 0 ; i < n ; i++)
        {
            scanf("%s %i",nome,&numero);
            AdicionarNo(l,nome,numero);
        }

        Josephus(l);

        printf("Vencedor(a): %s\n",l->inicial->nome);

        scanf("%i",&n);

    }



    return 0;
}


No* NovoNoh()
{
   No *n = (No*) malloc(sizeof(No));
   n->next = NULL;
   n->prior = NULL;

   return n;
}

lista* NovaLista()
{
    lista *l = (lista*)malloc(sizeof(lista));
    l->inicial = NULL;
    l->count = 0;

    return l;
}

lista* AdicionarNo(lista *l ,char nom[50], int x)
{
    No *n = NovoNoh();
    strcpy(n->nome,nom);
    n->numero = x;

    if(l->inicial == NULL)
    {
       l->inicial = n;
       l->inicial->next = NULL;
       l->inicial->prior = NULL;
       l->count++;
    }
    else if(l->inicial->next == NULL)
    {
        l->inicial->next = n;
        n->next = l->inicial;
        l->inicial->prior = n;
        n->prior = l->inicial;
        l->count++;
    }

    else
    {
       l->inicial->prior->next = n;
       n->prior = l->inicial->prior;
       l->inicial->prior = n;
       n->next = l->inicial;
       l->count++;
    }
}

No* Josephus(lista *l)
{
    No *noh;
    int passo = l->inicial->numero;
    bool impar;

    (passo % 2 != 0) ? noh = l->inicial->next : noh = l->inicial->prior;


    while(l->count > 1)
    {
        (passo % 2 != 0) ? impar = true : impar = false;

        for(int i = 0; i < passo - 1 ; i++)
        {
           if(impar)
              noh = noh->next;
           else
              noh = noh->prior;
        }

        passo = noh->numero;
        (passo % 2 != 0) ? impar = true : impar = false;

        No *aux;
        if(impar)
            aux = noh->next;
        else
            aux = noh->prior;

        Remove(l,noh);
        noh = aux;
    }
}
void Remove(lista *l , No *n)
{
    if(n->next == NULL || n->prior == NULL)
        free(n);
    else if(n == l->inicial)
    {
        l->inicial->next->prior = l->inicial->prior;
        l->inicial->prior->next = l->inicial->next;
        l->inicial = l->inicial->next;
        free(n);
    }
    else{
        n->prior->next = n->next;
        n->next->prior = n->prior;
        free(n);
    }
    l->count--;
}
