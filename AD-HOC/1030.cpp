#include<stdio.h>

using namespace std;

struct node
{
 int value;
 node *next, *prior;
 node () {}
 node(int a, node *ne, node *pr) : value(a), next(ne), prior(pr) {}

};

int josephus(int tam,int cont)
{
    node *p, li[tam], novo[tam+1];

    li[0]=node(1,NULL,NULL);
    p=li;


    for(int i=2; i<=tam; i++)
    {
     novo[i] =  node(i,NULL,NULL);
     novo[i].prior=p;
     p->next=&novo[i];
     p=p->next;
     if(i==tam)
     {
         li->prior=&novo[i];
         novo[i].next=li;
     }

    }//for

    p=li;
    int valor=0;

    while(tam)
    {
        valor++;
        if(valor==cont)
        {
            p->prior->next=p->next;
            p->next->prior=p->prior;
            tam--;
            valor=0;
        }
        p=p->next;
    }
    return p->value;

}


int main()
{
 int a,b,c;

 scanf("%i",&c);

 for(int i=1;i<=c;i++)
 {
     scanf("%i %i", &a, &b);
     printf("Case %i: %i\n",i, josephus(a ,b));
 }


 return 0;
}
