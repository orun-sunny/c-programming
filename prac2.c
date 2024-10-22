#include <stdio.h>
int main()
{
    int a[100];
    int n,i;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    printf("Enter elements in array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\narray in reverse order: ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;

}
