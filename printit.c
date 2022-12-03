#include <stdio.h>

int main()
{
   int a, b;
   int *ptrX, *ptrY;

   scanf("%d %d", &a, &b);

   ptrX = &a;
   ptrY = &b;

   printf("%d %d", *ptrX, *ptrY);

   return 0;
}
