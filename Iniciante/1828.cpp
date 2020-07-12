#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getWinner(char sheldonSuggestion[10], char ragSuggestion[10]);

int main()
{
   int currentCase = 1;
   int caseNumber = 0;

   char sheldonSuggestion[10], ragSuggestion[10];

   scanf("%i", &caseNumber);

   while(currentCase <= caseNumber){

      scanf("%s %s",sheldonSuggestion, ragSuggestion);
      
      int winner = getWinner(sheldonSuggestion, ragSuggestion);
      
      switch (winner)
      {
         case 1:
            printf("Caso #%i: Bazinga!\n",currentCase);
            break;
         case 2:
            printf("Caso #%i: Raj trapaceou!\n",currentCase);
            break;
         default:
            printf("Caso #%i: De novo!\n",currentCase);
            break;
      }

      currentCase++;
   }

   return 0;
}

int getWinner(char sheldonSuggestion[10], char ragSuggestion[10]){
   
   if(strcmp(sheldonSuggestion,ragSuggestion) == 0)
     return 0;

   if(strcmp(sheldonSuggestion,"tesoura") == 0 && strcmp(ragSuggestion,"papel") == 0)
      return 1;

   else if(strcmp(sheldonSuggestion,"papel") == 0 && strcmp(ragSuggestion,"pedra") == 0)
      return 1;

   else if(strcmp(sheldonSuggestion,"pedra") == 0 && strcmp(ragSuggestion,"lagarto") == 0)
      return 1;

   else if(strcmp(sheldonSuggestion,"lagarto") == 0 && strcmp(ragSuggestion,"Spock") == 0)
      return 1;

   else if(strcmp(sheldonSuggestion,"Spock") == 0 && strcmp(ragSuggestion,"tesoura") == 0)
      return 1;

   else if(strcmp(sheldonSuggestion,"tesoura") == 0 && strcmp(ragSuggestion,"lagarto") == 0)
      return 1;

   else if(strcmp(sheldonSuggestion,"lagarto") == 0 && strcmp(ragSuggestion,"papel") == 0)
      return 1;

   else if(strcmp(sheldonSuggestion,"papel") == 0 && strcmp(ragSuggestion,"Spock") == 0)
      return 1;

   else if(strcmp(sheldonSuggestion,"Spock") == 0 && strcmp(ragSuggestion,"pedra") == 0)
      return 1;

   else if(strcmp(sheldonSuggestion,"pedra") == 0 && strcmp(ragSuggestion,"tesoura") == 0)
      return 1;

   else 
      return 2;
}