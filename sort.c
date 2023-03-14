
#include <stdio.h>

void swap(int* s, int* t);
void b_sort(int a[], int len, int asc);

int main()
{
   int n, i;
   scanf("%d", &n);
   int a[n], b[n];

   for(i=0; i<n; i++)
   {
      scanf("%d ", &a[i]);
   }
   for(i=0; i<n; i++)
   {
      scanf("%d ", &b[i]);
   }


   b_sort(a, n, 1);
   b_sort(b, n, 0);

   for(i=0; i<n; i++)
   {
      printf("%d ", a[i]-b[i]);
   }
   return 0;
}

void swap(int* s, int* t)
{
   int temp;
   temp = *s;
   *s = *t;
   *t = temp;
}

void b_sort(int a[], int len, int asc)
{
   int i, j;
   for(i=0; i<len; i++)
   {
      for(j=i; j<len; j++)
      {
         if(asc)
            a[i] > a[j] ? swap(&a[i], &a[j]) : NULL;
         else
            a[i] < a[j] ? swap(&a[i], &a[j]) : NULL;

      }
   }
}
