#include <stdio.h>
#include <string.h>

int main()
{
   int T, i, j;
   scanf("%d", &T);

   for(i=0; i<T; i++)
   {
      char s[20];
      char extra_s[20];
      scanf("%s", &s);
      int len_s = strlen(s);
      for(j=0; j<len_s; j++)
      {
         extra_s[len_s-1-j] = s[j];
      }
      int flag=0;
      for(j=0; j<len_s; j++)
      {
         if(s[j] != extra_s[j])
         {
            flag = 1;
            break;
         }
      }
      if (flag == 1)
      {
         printf("Case #1: Not Palindrome\n");
      }
      else
      {
         if(len_s > 7)
         {
            printf("Case #2: %c%d%c\n", s[0], len_s-2, s[len_s-1]);
         }
         else
         {
            printf("Case #3: %s\n",s);
         }
      }

   }

   return 0;
}
