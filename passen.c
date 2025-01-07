#include <stdio.h>
int main()
{

    int n,i,w,sum=0;
    printf("Enter The number of passenger: ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        scanf("%d",&w);
        sum+=w;
        i++;

    }
    printf("Total sum of weights = %d",sum);


    return 0;
    }

