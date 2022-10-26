#include <stdio.h>

int main()
{
    int i, n;

    /* Input upper limit of even number from user */

    scanf("%d", &n);

   // printf("All even numbers from 1 to %d are: \n", n);

    /*
     * Start loop from 2 and increment by 2,
     * in each repetition
     */
    for(i=2; i<=n; i+=2)
    {
        printf("%d ",i);
    }

    return 0;
}
