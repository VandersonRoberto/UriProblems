#include <stdio.h>
#include <stdlib.h>

#define col 9
#define lin 9


char* Checked (int m[lin][col], char *s);
char* Three (int m[lin][col] , char *s);

int main()
{
    int n = 0, i = 0 , j = 0 , cont = 0;
    int ma[lin][col];
    char *aux , *aux2;

    scanf("%i",&n);

    while(n > 0)
    {
        aux = (char*) malloc(4 * sizeof(char));
        if(n > 0)
        {
           for(i = 0 ; i < lin ; i++)
           {
              for(j = 0 ; j < col ; j++)
              {
                 scanf("%i",&ma[i][j]);
              }
           }
        }
        n--;
        cont ++;
        aux = Checked(ma,aux);
        aux2 = Three(ma,aux);


        if(aux == "SIM" && aux2 == "SIM")
        {
            printf("Instancia %i\n",cont);
            printf("SIM\n");
            printf("\n");
        }
        else {
            printf("Instancia %i\n",cont);
            printf("NAO\n");
            printf("\n");
        }

    }
    return 0;
}
char* Checked (int m[lin][col], char *s)
{

   int vet[lin];
   int i , j , z;

   for(i = 0 ; i < lin ; i++)
   {
     for(j = 0 ; j < col ; j++)
     {
         if(j == 0)
         {
            vet[j] = m[i][j];
         }
         else
         {
             for (z = 0 ; z < j; z++)
             {
                  if(vet[z] == m[i][j])
                    return "NAO";
             }
             vet[j] = m[i][j];
         }
     }
   }

   for(i = 0 ; i < lin ; i++)
   {
     for(j = 0 ; j < col ; j++)
     {
         if(j == 0)
         {
            vet[j] = m[j][i];
         }
         else
         {
             for (z = 0 ; z < j; z++)
             {
                  if(vet[z] == m[j][i])
                    return "NAO";
             }
             vet[j] = m[j][i];
         }
     }
   }

   return "SIM";
}
char* Three (int m[lin][col] , char *s)
{
    int i , j, z , k;
    int v[lin];
    i = j = k = 0 ;
    z = -1;

    for(i = 0 ; i < 3 ; i++ )
    {
      for(j = 0 ; j < 3 ; j++)
      {
          z++;
          if(z == 0)
          {
             v[z] = m[i][j];
          }
          else
          {
             for(k = 0 ; k < z ; k++)
             {
                if(v[k] == m[i][j])
                {
                    return "NAO";
                }
             }
             v[z] = m[i][j];
          }
      }
    }

    z = -1;

    for(i = 0 ; i < 3 ; i++ )
    {
      for(j = 3 ; j < 6 ; j++)
      {
          z++;
          if(z == 0)
          {
             v[z] = m[i][j];
          }
          else
          {
             for(k = 0 ; k < z ; k++)
             {
                if(v[k] == m[i][j])
                {
                    return "NAO";
                }
             }

             v[z] = m[i][j];
          }

      }
    }

    z = -1;

    for(i = 0 ; i < 3 ; i++ )
    {
      for(j = 6 ; j < 9 ; j++)
      {
          z++;
          if(z == 0)
          {
             v[z] = m[i][j];
          }
          else
          {
             for(k = 0 ; k < z ; k++)
             {
                if(v[k] == m[i][j])
                {
                    return "NAO";
                }
             }

             v[z] = m[i][j];
          }

      }
    }

    z = -1;
    for(i = 3 ; i < 6 ; i++ )
    {
      for(j = 0 ; j < 3 ; j++)
      {
          z++;
          if(z == 0)
          {
             v[z] = m[i][j];
          }
          else
          {
             for(k = 0 ; k < z ; k++)
             {
                if(v[k] == m[i][j])
                {
                    return "NAO";
                }
             }

             v[z] = m[i][j];
          }
      }
    }

    z = -1;

    for(i = 3 ; i < 6 ; i++ )
    {
      for(j = 3 ; j < 6 ; j++)
      {
          z++;
          if(z == 0)
          {
             v[z] = m[i][j];
          }
          else
          {
             for(k = 0 ; k < z ; k++)
             {
                if(v[k] == m[i][j])
                {
                    return "NAO";
                }
             }

             v[z] = m[i][j];
          }

      }
    }

    z = -1;

    for(i = 3 ; i < 6 ; i++ )
    {
      for(j = 6 ; j < 9 ; j++)
      {
          z++;
          if(z == 0)
          {
             v[z] = m[i][j];
          }
          else
          {
             for(k = 0 ; k < z ; k++)
             {
                if(v[k] == m[i][j])
                {
                    return "NAO";
                }
             }

             v[z] = m[i][j];
          }

      }
    }

    z=-1;
    for(i = 6 ; i < 9 ; i++ )
    {
      for(j = 0 ; j < 3 ; j++)
      {
          z++;
          if(z == 0)
          {
             v[z] = m[i][j];
          }
          else
          {
             for(k = 0 ; k < z ; k++)
             {
                if(v[k] == m[i][j])
                {
                    return "NAO";
                }
             }

             v[z] = m[i][j];
          }
      }
    }

    z = -1;

    for(i = 6 ; i < 9; i++ )
    {
      for(j = 3 ; j < 6 ; j++)
      {
          z++;
          if(z == 0)
          {
             v[z] = m[i][j];
          }
          else
          {
             for(k = 0 ; k < z ; k++)
             {
                if(v[k] == m[i][j])
                {
                    return "NAO";
                }
             }

             v[z] = m[i][j];
          }

      }
    }

    z = -1;

    for(i = 6 ; i < 9 ; i++ )
    {
      for(j = 6 ; j < 9 ; j++)
      {
          z++;
          if(z == 0)
          {
             v[z] = m[i][j];
          }
          else
          {
             for(k = 0 ; k < z ; k++)
             {
                if(v[k] == m[i][j])
                {
                    return "NAO";
                }
             }

             v[z] = m[i][j];
          }

      }
    }

    return "SIM";
}
