#include <stdio.h>

int count_prime(int n);
float find_average(int a[], int n);

int main()
{
   int n, i, count=0;
   scanf("%d", &n);
   int a[n];

   for(i=0; i<n; i++)
   {
      scanf("%d", &a[i]);
   }
   for(i=0; i<n; i++)
   {
      int prime = count_prime(a[i]);
      if(prime)
         count++;
   }

   float avg = find_average(a, n);

   printf("Prime numbers: %d\n", count);
   printf("Average of all even integers: %.2f\n", avg);

   return 0;
}

int count_prime(int n)
{
   int i;

   if(n==1)
      return 0;
   else
   {
      for(i=2; i<=n/2; i++)
      {
         if(n%i == 0)
            return 0;
      }
      return 1;
   }
}

float find_average(int a[], int n)
{
   int i, sum=0, count=0;
   float avgg;

   for(i=0; i<n; i++)
   {
      if(a[i]%2==0)
      {
         sum += a[i];
         count++;
      }
   }
   avg = sum/count;
   return avg;
}
