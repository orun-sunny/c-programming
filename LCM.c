#include <stdio.h>

int main() {

    int a, b,x;
    scanf("%d %d", &a, &b);
    x = (a > b) ? a : b;

    while (1) {
        if ((x % a == 0) && (x % b == 0)) {
            printf("The LCM of %d and %d is %d.", a, b,x);
            break;
        }
        ++x;
    }
    return 0;
}
