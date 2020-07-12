#include <stdio.h>
#include <iostream>
#include <cstdlib>

using namespace std;

int Comparacao (const void* a , const void* b);

int main(int argc, char **argv)
{
	int vet[100000] ,inicio,fim,n , ind = 0 , alvo;
    bool primeiraVez = false;
    
	while(scanf("%i",&n) != EOF)
	{
		ind = 0;
		primeiraVez = false;
	   for(int i = 0 ; i < n; i++)
	   {
		   scanf("%i %i",&inicio,&fim);
		    
		   for(int j = inicio ; j <= fim ; j++ ){
				vet[ind] = j;
				ind++;
			}
			
	   }
	   
	   scanf("%i",&alvo);
	   
	   std::qsort(vet,ind,sizeof(int),Comparacao);
	   
	   inicio = fim = 0;
	   
	   for(int i = 0 ; i < ind ; i++)
	   {
		   if(vet[i] == alvo && primeiraVez == false){
			  inicio = i;
			  fim = i;
			  primeiraVez = true;
		   }
		   else if(vet[i] == alvo)
			  fim = i;
		   else if(fim != 0 && vet[i] != alvo || vet[i] > alvo )
			  break;
			   
	   }
	   
	   if(primeiraVez)
		 printf("%i found from %i to %i\n",alvo,inicio,fim);
	   else
		 printf("%i not found\n",alvo);	
	   	
	}
	
	return 0;
}


int Comparacao (const void* a , const void* b)
{
   int* n = (int*)a;
   int* n2 = (int*)b;
   
   if(*n < *n2)
		return -1;
   else if(*n > *n2)
		return 1;	
   else
		return 0;
}
