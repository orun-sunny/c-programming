#include <stdio.h>

int arr_beautiful(int a[], int n);

int main()
{
    int N, i;
    scanf("%d", &N);

    int a[N];
    for(i=0; i<N; i++)
    {
        scanf("%d", &a[i]);
    }
    int beauty = arr_beautiful(a, N);
    if(beauty=0)
    {
        printf("Beautiful\n");
    }

    else
        printf("Ugly\n");
    return 0;
}

int arr_beautiful(int a[], int n)
{
    int count=0, i=0, half=n/2;
    int *arr = &a[0];
    for(i=0; i<n; i++)
    {
        int num = *(arr+i);
        while(num > 0)
        {
            if(num%10==7)
                count++;

            num/=10;
        }
    }
    if(count >= half)
        return 1;
    else
        return 0;
}
