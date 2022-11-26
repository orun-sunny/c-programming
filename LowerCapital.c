#include <stdio.h>
int main()
{
    int n,k;
    int count=1;
    printf("Enter number of elements in the array: ");
    scanf("%d %d", &n,&k);

    int arr[n];

    //Take n elements as input from the user
    // printf("Enter %d elements in the array: ",n);
    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
            printf("%d ", i);
        arr[i]=count;
    }

    //Print all the even numbers
    //printf("Even numbers in the array are: ");

    for(int i=0; i<=n; i++)
    {
        if(i%2==1)
            printf("%d ", i);
        arr[i]=count;

    }
    // arr[i]=count;


    printf("\n The %d th kth number is: %d", k, arr[k - 1]);



}
