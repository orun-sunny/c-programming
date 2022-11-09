#include<stdio.h>
int main()
{
    int n=100;
    int sum=0;
    int k,i,a,b,c,d;
    scanf("%d",&n);
    //int solved=0;
    for(i=1; i<=n; i++)
    {
        scanf("%d %d %d %d",&sum,&a,&b,&c);
        d=sum-(a+b+c);


    }
    printf("%d\n",d);

    return 0;
}
