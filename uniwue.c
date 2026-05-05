
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
    int isUni=1;
    for(j=0; j<N; j++)
    {
        if(arr[i]!=arr[0])
        {
            isUni=0;
            break;
        }

    }

    if(isUni)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }




    return 0;
}
