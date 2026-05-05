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
    scanf("%d",&Q);
    for(j=0; j<Q; j++)
    {
        int i,v;
        scanf("%d %d",&i,&v);
        if(i>=0&&i<N)
        {
            arr[i]+=v;
        }


    }

    printf("Updated array:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");




    return 0;
}
