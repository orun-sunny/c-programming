#include <stdio.h>
int divby_3(int a[],int n);
int divby_5(int a[],int n);
int divby_both(int a[],int n);

int main()
{
    int N,i,total=0;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    int x=divby_3(a,N);
    int y=divby_5(a,N);
    int z=divby_both(a,N);

    total=x+y+z;
    if(total==0)
    {
        printf("-1");

    }
    else
        printf("%d",total);
    return 0;
}






int divby_3(int a[], int n)
{
   int i, sum=0;

   for(i=0; i<n; i++)
   {
      if(a[i]%3==0 && a[i]%5!=0)
         sum++;
   }
   return sum;
}

int divby_5(int a[], int n)
{
   int i, sum=0;

   for(i=0; i<n; i++)
   {
      if(a[i]%5==0 && a[i]%3!=0)
         sum++;
   }
   return sum;
}

int divby_both(int a[], int n)
{
   int i, sum=0;

   for(i=0; i<n; i++)
   {
      if(a[i]%3==0 && a[i]%5==0)
         sum++;
   }
   return sum;
}
