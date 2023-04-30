

#include <stdio.h>
int main()
{
    int n;
    int i, j, k=1, count=0;
    scanf("%d",&n);

    for(i=1; i<=n*2; i+=2)
    {
        for(j=1; j<=n*2-i-1; j+=2)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            count ? printf("*"): printf("^");
        }
         count  ?  count++ :  count--;
        printf("\n");
    }

        return 0;
    }
