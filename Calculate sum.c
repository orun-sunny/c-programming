#include <stdio.h>

void cal_sum(int n);

int main()
{
   int N;
   scanf("%d", &N);

   cal_sum(N);
   return 0;
}

void cal_sum(int n)
{
   int i, s=0, flag=0;

   for(i=1; i<=n; i++)
   {
      if(flag%2==0)
         sum += i;
      else
         sum -= i;


      if(i%3 == 0)
         flag++;
   }

   printf("%d ", sum);
}
