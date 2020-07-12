#include <stdio.h>
#include <stdlib.h>

void limparConteudoMatrix(int matrix[101][101], int lenght);
void diagonalPrimaria(int matrix[101][101],int lenght);
void diagonalSecundaria(int matrix[101][101], int lenght);
void preencheParteInterna(int matrix[101][101], int lenght);
void imprimirMatrix(int matrix[101][101], int lenght);


int main()
{
   int lenght, matrix[101][101];
   lenght = 0;

   while(scanf("%i",&lenght) != EOF)
   {

      limparConteudoMatrix(matrix,lenght);

      diagonalPrimaria(matrix,lenght);
      diagonalSecundaria(matrix, lenght);
      preencheParteInterna(matrix,lenght);
   
      imprimirMatrix(matrix,lenght);

      printf("\n");   
   }
}


void limparConteudoMatrix(int matrix[101][101], int lenght){
      for(int i = 0; i< lenght; i++){
         for(int j = 0; j < lenght; j++){
            matrix[i][j] = 0;
         }
      }
}

void diagonalPrimaria(int matrix[101][101],int lenght){
   for(int i = 0; i < lenght ; i++)
      matrix[i][i] = 2;
}

void diagonalSecundaria(int matrix[101][101],int lenght){
   for(int i = lenght-1 , j = 0 ; i >= 0 ; i--,j++)
      matrix[i][j] = 3;
}

void preencheParteInterna(int matrix[101][101], int lenght){

      int startInternal = (lenght/3);

      for(int i= startInternal; i < (lenght - startInternal); i++){
         for(int j=startInternal; j < (lenght - startInternal); j++){
               matrix[i][j] = 1;
         }
      }

      //central
      matrix[(int)(lenght/2)][(int)(lenght /2)] = 4;     
}

void imprimirMatrix(int matrix[101][101], int lenght){
      for(int i=0; i < lenght; i++){
         for(int j=0; j < lenght; j++){
            printf("%i",matrix[i][j]);
         }
         printf("\n");   
      }
}