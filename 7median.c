#include <stdio.h>

int main()
{
   int i=0, j=0, n;
   printf("Give input size = ");
   scanf("%d", &n);
   int a[n];

   for(i=0; i<n; i++)
   {
      scanf("%d ", &a[i]);
   }

   int count;
   for(i=0; i<n-1; i++)
   {
      for(j=i; j<n; j++)
      {
         if(a[j] < a[i])
         {
            count = a[j];
            a[j] = a[i];
            a[i] = count;
         }
      }
   }

   for(i=0; i<n; i++)
   {
      printf("%d ", a[i]);
   }

   if(n%2==1)
      printf("Median = %d", a[n/2]);
   else
   {
      int half = n/2;
      float sum = a[half] + a[half+1];
      printf("Median = %.2f", sum/2);
   }
   return 0;
}
