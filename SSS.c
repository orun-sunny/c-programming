#include <stdio.h>
int main()
{
   int i = 7, *j, k;
   j = &i;
   printf("%d\n", i* *j *i - *j - i);
   return 0;



}
