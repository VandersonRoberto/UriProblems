#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int a, b, q, r;

   scanf("%i %i", &a, &b);
   r = a % b;
   q = (a - r) / b;

   if (r < 0 || r > abs(b))
   {
      do
      {
         if (q >= 0)
            q++;
         else
            q--;

         r = (b * q) + (-1 * a);
         r = r * -1;

         if (r < 0)
         {
            q = -1;

            r = (b * q) + (-1 * a);
            r = r * -1;
         }

      } while ((r < 0 || r > abs(b)) || a != ((b * q) + r));
   }

   printf("%i %i\n", q, r);

   return 0;
}
