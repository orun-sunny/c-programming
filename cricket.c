#include <stdio.h>

int main()
{
    /* Loop counter variable declaration */
    int n=100;
    int k=100;
    int i;
    scanf("%d %d",&n,&k);
    int ara[105];
    int ans=0;


    /* Outer loop */
    for(i=1; i<=n; i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(ara[i]<k )
            ans++;
    }





    printf("%d",ans);



    return 0;
}
