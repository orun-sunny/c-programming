#include<stdio.h>

int main()
{
    int n;
    int k=100;
    int i;

    int ara[n];
    int ans=0;
    scanf("%d",&n);


    /* Outer loop */
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }


    int m=ara[0];
    for(i=0;i<n;i++)
    {
        if(ara[i]>m)
        {
            m=ara[i];
        }
    }
    //{
       // if(ara[i]<k )

          //  ans++;
    //}





    printf("%d",m);

    return 0;
}
