#include<stdio.h>

int main() {
  int a, b, c, n, i;

  scanf("%d", & n);
  for (i = 1; i <= n; i++) {

    scanf("%d %d %d", & a, & b, & c);

    if (a > b && a > c && b > c) {
      printf("Case %d: %d\n", i, b);
    } else if (a > b && a > c && c > b) {
      printf("Case %d: %d\n", i, c);
    } else if (b > a && b > c && a > c) {
      printf("Case %d: %d\n", i, a);
    } else if (b > a && b > c && c > a) {
      printf("Case %d: %d\n", i, c);
    } else if (c > a && c > b && a > b) {
      printf("Case %d: %d\n", i, a);
    } else if (c > a && c > b && b > a) {
      printf("Case %d: %d\n", i, b);
    }
  }
  return 0;
}
