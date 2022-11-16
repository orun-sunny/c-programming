#include <stdio.h>


int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int  k;
    scanf("%d",&k);
    for(int i=k+1; i<=n; i++)
    {
        printf("%d ",arr[i]);
    }
    for(int i=1; i<=k; i++)
    {
        printf("%d",arr[i]);
        if(i<k)
            printf(" ");
        if(i==k)
            printf("\n");
    }

    return 0;
}
