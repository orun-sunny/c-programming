#include <stdio.h>

void h_swap(int* x, int* y);
void bsort(int a[], int len, int asc);

int main()
{
   int m, i;
   scanf("%d", &m);
   int a[m], b[m];
//loop will
   for(i=0; i<m; i++)
   {
      scanf("%d ", &a[i]);
   }
   for(i=0; i<m; i++)
   {
      scanf("%d ", &b[i]);
   }


   bsort(a, m, 1);
   bsort(b, m, 0);

   for(i=0; i<m; i++)
   {
      printf("%d ", a[i]-b[i]);
   }
   return 0;
}

void h_swap(int* x, int* y)
{
   int count;
   count = *x;
   *x = *y;
   *y = count;
}

void bsort(int a[], int len, int asc)
{
   int i, j;
   for(i=0; i<len; i++)
   {
      for(j=i; j<len; j++)
      {
         if(asc)
            a[i] > a[j] ? h_swap(&a[i], &a[j]) : NULL;
         else
            a[i] < a[j] ? h_swap(&a[i], &a[j]) : NULL;

      }
   }
}
