#include <stdio.h>
int main()
{
    int n,w,i,sum=0;
    printf("Enter the number of passenger: ");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        scanf("%d",&w);
        sum +=w;
    }
    printf("Total sum of weight = %d",sum);
    return 0;

}
