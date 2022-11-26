#include <stdio.h>
int two_factorial(int fac1, int fac2);
int factorial(int fac1);


int main()
{
   int fac1;
   scanf("%d", &fac1);

   int p = factorial(fac1);
   printf("Facto = %d\n", p);

   int fac2, fac3;
   scanf("%d %d", &fac2, &fac3);
   int q = two_factorial(fac2, fac3);
   printf("Facto check = %d", q);

   return 0;
}

int factorial(int fac1)
{
   int i=1, x=1;
   for(i=1; i<=fac1; i++)
   {
      x *= i;
   }
   return x;
}

int two_factorial(int fac1, int fac2)
{
   int first = factorial(fac1);
   int second = factorial(fac2);

   int ratio_range = first / second;
   return ratio_range;
}
