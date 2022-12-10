#include<stdio.h>

int main()
{
    int n,a,b,Terms;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    a=0,b=1,Terms=a+b;
    printf("%d %d",a,b);
    for(int i=0; i<n-2; i++)
    {
        printf(" %d,",Terms);
        a=b;
        b=Terms;
        Terms=a+b;
    }
return 0;
}
