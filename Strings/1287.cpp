#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{

    char saida[1000] = {'\0'};
    string str;
    int ind , flag = 0;
    long long int num = 0;


while(getline(cin,str)){

    ind = 0;
    flag = 0;

    for(int i = 0; i < str.size() ; i++)
    {
       if(str[i] == 'o' || str[i] == 'O' || str[i] == '0')
       {
           saida[ind] = '0';
           ind++;
       }
       else if(str[i] == 'l' || str[i] == '1')
       {
           saida[ind] = '1';
           ind++;
       }
       else if (str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7'
                || str[i] == '8' || str[i] == '9')
       {

           saida[ind] = str[i];
           ind++;
       }
       else if(str[i] != ',' && str[i] != ' ')
       {
           flag = 1;
       }


    }

  if(flag == 0){

    if(strlen(saida) == 0)
    {
        printf("error\n");
        flag = 1;
    }

        saida[ind] = '\0';
        num = atoll(saida);

    if(num <= 2147483647 && num >= 0 && flag == 0){
        printf("%lli\n",num);
    }
    else if(flag == 0)
        printf("error\n");

  }
  else
     printf("error\n");

     str[0] = '\0';
     saida[0] = '\0';

}
    return 0;
}
