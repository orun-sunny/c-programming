#include <stdio.h>
int main()
{
    int n,w,i;
    int sum=0;
    printf("Enter the number of passenger : " );
    scanf("%d",&n);
    i=1;
while (i<=n)
    {
        scanf("%d",&w);
        sum+=w;
        i++;
    }
    printf("Total sum of weight = %d",sum);
    return 0;
}
