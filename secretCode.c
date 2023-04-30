#include <stdio.h>
int main()
{
    int t=100;
    int i;
    long long int N;
    //scanf("%d",&t);


    for(i=0;i<t;i++)
    {
        scanf("%d %lld",&t,&N);
        //scanf("%lld",&N);
        if(N%i==0 && N/N==0)
            printf("Yes");
        else
            printf("no");


    }
    printf("\n");
    return 0;
}
