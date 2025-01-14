#include <stdio.h>
int main()
{

    long long n,k;
    scanf("%lld %lld",&n,&k);
    long long oddCount = (n+1)/2;
    if(k <=oddCount)
    {
        printf("%lld\n",2*k-1);
    }
     else {
        // If k is in the even sequence
        printf("%lld\n", 2*(k - oddCount));
    }


    return 0;
}
