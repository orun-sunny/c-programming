#include <stdio.h>

int main()
{
    int i, j;
    int N =20;

    printf("");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
        //printf("\%d",i);
    {
        // Logic to print numbers
        for(j=i; j>=1; j--)
        {
            printf("---->%d ", j);
        }

        printf("\n");
    }

    return 0;
}
