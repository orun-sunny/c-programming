#include <stdio.h>
int main()
{
    int N,i;

    scanf("%d", &N);


    // Step 3: Declare an array of size N
    int arr[N];

    // Step 4: Input elements into the array

    for (i = 0; i < N; i++)
    {

        scanf("%d", &arr[i]);

    }
    for(i=N-1;i>=0;i--){
        printf("%d ",arr[i]);
    }




    return 0;



}
