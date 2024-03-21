#include <stdio.h>

int main()
{

    //fill the code
    long long int num ;
    scanf("%lld",&num);

    int total = num * (num-1) / 2;

    printf("%lld", total);

    return 0;

}
