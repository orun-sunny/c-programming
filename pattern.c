
#include <stdio.h>
int main()
{

    int i,j;
    for(i=1;i<=7;i++)
    {
        printf("%d line",i);
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;

}
