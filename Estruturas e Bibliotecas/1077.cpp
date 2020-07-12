#include <stdio.h>
#include <stdlib.h>
#include <stack>
#include <string.h>

using namespace std;

int Prioridade(char c);

int main()
{

    int n , tam , ind;
    char expressao[1000] , saida[1000];
    stack<char> p;

    scanf("%i",&n);


    while(n != 0)
    {
       scanf(" %s",expressao);
       ind = 0;
       tam = strlen(expressao);

       for(int i = 0; i < tam ; i++ )
       {
          if( expressao[i] >= 'a' && expressao[i] <= 'z' || expressao[i] >= 'A' && expressao[i] <= 'Z' || expressao[i] >= '0' && expressao[i] <= '9')
          {
              saida[ind] = expressao[i];
              ind++;
          }

          else if (p.empty() || Prioridade(expressao[i]) > Prioridade(p.top()) || expressao[i] == '(')
          {
              p.push(expressao[i]);
          }

          else if (expressao[i] == ')')
          {
              while(p.top() != '(')
              {
                  saida[ind] = p.top();
                  p.pop();
                  ind++;
              }
              p.pop();
          }

          else
          {

            while(!p.empty() && Prioridade(p.top()) >= Prioridade(expressao[i]))
            {
                saida[ind] = p.top();
                p.pop();
                ind++;
            }
            p.push(expressao[i]);

          }

       }

       while(!p.empty())
       {
          saida[ind] = p.top();
          p.pop();
          ind++;
       }

       saida[ind] = '\0';
       printf("%s\n",saida);

       n--;

    }


    return 0;
}

int Prioridade(char c)
{
    switch(c)
    {
        case '(':
        case ')':
            return 0;
        case '+':
        case '-':
            return 1;
        case '/':
        case '*':
            return 2;
        case '^':
            return 3;

    }
}
