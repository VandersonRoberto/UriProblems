#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct Node{
  int info;
  Node *pai;
  Node *dir;
  Node *esq;
};

struct Tree{
    Node *raiz;
};

int prim;

Tree* NovaTree()
{
    Tree *t = (Tree*)malloc(sizeof(Tree));
    t->raiz = NULL;

    return t;
}

Node* NovoNo()
{
   Node *n = (Node*)malloc(sizeof(Node));
   n->esq = NULL;
   n->dir = NULL;
   n->pai = NULL;

   return n;
}

void Insert(Node *n , int x)
{

   if(n->info > x)
   {
       if(n->esq == NULL)
       {
           Node *no = NovoNo();
           no->info = x;
           no->pai = n;
           n->esq = no;
       }
       else
           Insert(n->esq,x);
   }
   else
   {
       if(n->dir == NULL)
       {
           Node *no = NovoNo();
           no->info = x;
           no->pai = n;
           n->dir = no;
       }
       else
           Insert(n->dir,x);

   }
}


void Insert(Tree *t , int x)
{
   if(t->raiz == NULL)
   {
       Node *n = NovoNo();
       n->info = x;
       t->raiz = n;
   }
   else
   {
      Insert(t->raiz,x);
   }
}

bool Find(Node *n , int x)
{
    if(n == NULL ){return false;}
    else if(n->info == x){return true;}
    else if(x < n->info)
        Find(n->esq,x);
    else
        Find(n->dir,x);
}

Node* BuscaNo(Node *n,int x)
{
    if(n == NULL) return NULL;
    else if (n->info == x){return n;}
    else if(x < n->info)
        BuscaNo(n->esq,x);
    else
        BuscaNo(n->dir,x);

}


void EmOrdem(Node *n)
{
    if(n != NULL)
    {
        EmOrdem(n->esq);
        if(prim == 0){
            printf("%d",n->info);
            prim++;
        }
        else{
            printf(" %d",n->info);
        }
        EmOrdem(n->dir);
    }
}
void PreOrdem(Node *n)
{
    if(n != NULL)
    {
        if(prim == 0){
            printf("%d",n->info);
            prim++;
        }
        else
            printf(" %d",n->info);
        PreOrdem(n->esq);
        PreOrdem(n->dir);
    }
}
void PosOrdem(Node *n)
{
    if(n != NULL)
    {
        PosOrdem(n->esq);
        PosOrdem(n->dir);
        if(prim == 0){
            printf("%d",n->info);
            prim++;
        }
        else
            printf(" %d",n->info);
    }
}

Node* killmax(Node *n)
{
	if (n->dir == NULL)
	{
		Node *t = n;
		if (n->pai->dir == n)
			n->pai->dir = n->esq;
		else
			n->pai->esq = n->esq;
               if (n->esq != NULL) n->esq->pai = n->pai;
               return t;
	}
	else
	{
              return killmax(n->dir);
	}
}

void remove2(Tree *t, int x) {
Node *f = BuscaNo(t->raiz,x);

if (f==NULL) return;
if (f->esq == NULL)
{
   if (f->pai == NULL)
      t->raiz = f->dir;
   else
   {
      if (f->pai->dir == f)
         f->pai->dir = f->dir;
      else
         f->pai->esq = f->dir;
      if (f->dir != NULL) f->dir->pai = f->pai;
   }
}
else
{
   if (f->dir == NULL)
   {
      if (f->pai == NULL)
         t->raiz = f->esq;
      else
      {
         if (f->pai->dir == f)
            f->pai->dir = f->esq;
         else
            f->pai->esq = f->esq;
         if (f->esq != NULL)  f->esq->pai = f->pai;
      }
   }
   else
   {
      Node *p = killmax(f->esq);
      f->info = p->info;
   }
}
if (t->raiz != NULL) t->raiz->pai = NULL;
}




int main()
{
    Tree *t = NovaTree();
    int x;
    char str[20];

    while(scanf("%s",str) != EOF)
    {
       if(strcmp(str,"INFIXA") == 0)
       {
           prim = 0;
           EmOrdem(t->raiz);
           printf("\n");
       }
       else if(str[0] == 'I')
       {
           scanf(" %d",&x);
           Insert(t,x);
       }

       else if(strcmp(str,"PREFIXA") == 0)
       {
           prim = 0;
           PreOrdem(t->raiz);
           printf("\n");

       }
       else if(strcmp(str,"POSFIXA") == 0)
       {
           prim = 0;
           PosOrdem(t->raiz);
           printf("\n");
       }
       else if(str[0] == 'P')
       {
           scanf(" %d",&x);
           Find(t->raiz, x) ? printf("%d existe\n",x) : printf("%d nao existe\n",x);
       }
       else if(str[0] == 'R'){
           scanf(" %d",&x);
           //Remove(t,x);
           remove2(t,x);
       }
    }

    return 0;
}
