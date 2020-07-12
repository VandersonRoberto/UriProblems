#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int gG , gI , cTotal = 0,cI = 0, cG = 0,cEmp = 0;
    int op;

    do
    {
       cTotal++;
       scanf("%i" "%i",&gI,&gG);

       if(gG > gI)
       {
           cG++;
       }
       else if (gI > gG)
       {
           cI++;
       }
       else
           cEmp++;

       do{
           printf("Novo grenal (1-sim 2-nao)\n");
           scanf("%i",&op);
         }while(op != 1 && op != 2);

    }while(op != 2);

    printf("%i grenais\n",cTotal);
    printf("Inter:%i\n",cI);
    printf("Gremio:%i\n",cG);
    printf("Empates:%i\n",cEmp);

    if(cG > cI)
    {
        printf("Gremio venceu mais\n");
    }
    else if(cI > cG)
    {
        printf("Inter venceu mais\n");
    }
    else
    {
        printf("Nao houve vencedor\n");
    }


    return 0;
}
