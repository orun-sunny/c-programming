

#include <stdio.h>
int main()
{
    int i,N,Q,j;
    scanf("%d",&N);
    int arr[N];
    for(i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=0; i<N; i++)
    {
        printf("%d - ", arr[i]);
        for(j=0; j<N; j++)
        {
            if(i!=j)
            {
             printf("%d",arr[j]);
            }

        }
        printf("\n");
    }







    return 0;
}
