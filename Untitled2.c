
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int n=100;
    long long int k,i,e,a,b,c;
    scanf("%lld",&n);
    //int solved=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld %lld %lld",&k,&a,&b,&c);
        e=(a+b+c);
        printf("%lld\n",k-e);

    }
    return 0;
}
