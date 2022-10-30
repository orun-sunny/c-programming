#include <stdio.h>
int main()
{
    long long int n,c=0;

    scanf("%lld",&n);
    while(n>0)
    {
        n /=10;
        c++;
    }
    printf("%lld \n",c);
    return 0;
}
