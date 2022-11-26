#include <stdio.h>
int main()
{
    int n,k;
    int count=0;

    scanf("%d %d", &n,&k);

    int arr[n];


    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            arr[count]=i;
            printf("%d ", i);
            count++;
        }

        //arr[i]=count;
    }

    //Print all the even numbers
    //printf("Even numbers in the array are: ");

    for(int i=1; i<=n; i++)
    {
        if(i%2==1)
        {
            arr[count]=i;
            printf("%d ", i);
            count++;
        }

    }
    // arr[i]=count;


    printf("\n The %d th kth number is: %d", k, arr[k - 1]);



}
