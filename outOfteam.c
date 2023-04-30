#include <stdio.h>
int main()
{
    int n=100;int k=100;int i;
    scanf("%d %d",&n,&k);
    int ara[101];
    for (i=1;i<n;i++)
    {
        scanf("%d",&ara[i]);


    }
    int ans=0;
    for(i=1;i<n;i++)
    {
        if(ara[i]>=k)
            ans++;
    }
    printf("%d\n",ans);

    return 0;

}
