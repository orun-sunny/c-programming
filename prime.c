#include<stdio.h>
int main()
{
    int i,n,a=0;

    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        if(n%i==0)
        a=a+1;
    }
    if (a==2)
    printf ("Prime");
    else
    printf ("Composite");
    return 0;
}
