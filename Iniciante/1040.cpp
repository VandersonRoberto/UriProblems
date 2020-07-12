#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double n1,n2,n3,n4,exame,media;

    scanf("%lf" "%lf" "%lf" "%lf" , &n1,&n2,&n3,&n4);

    media = ((n1*2) + (n2 * 3) + (n3 * 4 ) + (n4 * 1)) / 10;

    printf("Media: %.1lf\n",media);

    if(media >= 7 )
    {
        printf("Aluno aprovado.\n");
    }
    else if (media >= 5.0 && media <= 6.9){
        printf("Aluno em exame.\n");
        scanf("%lf",&exame);

        printf("Nota do exame: %.1lf\n",exame);
        media = (media + exame) /2;

        if(media >= 5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n",media);
        }
        else{
           printf("Aluno reprovado.\n");
           printf("Media final: %.1lf\n",media);
        }
    }
    else
    {
        printf("Aluno reprovado.\n");
    }

    return 0;
}
