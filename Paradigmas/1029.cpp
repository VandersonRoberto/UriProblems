#include <stdio.h>

using namespace std;

int Fibonnaci(int x)
{
    if(x == 0)
    {
        return 0;
    }
    if(x == 1 || x == 2){
        return 1;
    }

    else{
        return Fibonnaci(x - 1) + Fibonnaci(x - 2);
    }

}



int main()
{
    int n , x;
    int vet[40] = {0,0,2,4,8};

    for(int i = 5 ; i <40 ; i++)
    {
        vet[i] = vet[i - 1] + vet[ i - 2] + 2;
    }


    scanf("%i",&n);

    while(n > 0){

        scanf(" %i",&x);


        printf("fib(%i) = %i calls = %i\n",x,vet[x],Fibonnaci(x));
        n--;
    }
    return 0;
}
