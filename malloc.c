#include <stdio.h>

int sum(int a, int b)
{
  return a + b;
}

// Driver code
int main()
{
  int a, b;
  printf("Enter a and b");
  scanf("%d %d", &a, &b);

  // function call
  printf("Sum of %d and %d is: %d",
          a, b, sum(a, b));

  return 0;
}
