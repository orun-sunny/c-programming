
#include<stdio.h>
#include<math.h>
int fact (int x);

int main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    int ans = fact(n);
    printf("Factorial = %d\n",ans);
    return 0;
}

int fact (int x)
{
    int res=1,i;
    for(i=1;i<=x;i++)
    {
        res *=i;
    }
    return res;
}
