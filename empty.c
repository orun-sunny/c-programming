#include <stdio.h>
int main() {
  int i,j;
  int N=7;
  for(j=0;j<=N;j++)
  {
      printf("#");
  }
  printf("\n");
  for(i=0;i<=(N-2);i++)
  {
      printf("#");
      for(j=1;j<=N;j++)
      {
          printf(" ");
      }
       printf("#\n");
  }

  for(i=0;i<=N;i++)
  {
      printf("#");
  }
  printf("\n");


  return 0;

  }






