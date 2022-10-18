#include <stdio.h>
int main()
{
    int a,b,sum,sub,mult;
    scanf("%d %d", &a,&b);
    sum = a+b;
    sub=a-b;
    mult= a*b;

    printf("The sum of the given numbers : %d\n", sum);
    printf("The difference of the given numbers : %d\n", sub);
    printf("The product of the given numbers : %d\n", mult);
    return 0;


}
