#include <stdio.h>
int main()

{
    int ara[105];
    int n,i;
    int ans;
    int ec=0,oc=0;
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for (i=1;i<=n;i++)
    {
        if(ara[i]%2==0)
            ec++;
        else
            oc++;

    }
    if (ec==1)
    {
         for (i=1;i<=n;i++)
         {
             if(ara[i]%2==0)
             {
                 ans=i;

             }
         }

    }
    else
    {
        for (i=1;i<=n;i++)
        {
            if(ara[i]%2!=0)
            {
                ans=i;
            }
        }

    }
    printf("%d\n",ans);
    return 0;
}
