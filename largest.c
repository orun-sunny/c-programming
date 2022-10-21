#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Please Enter two different Values\n");
    scanf("%d%d",&x,&y,&z);
    if(x>y)
    {
        printf("%d is largest",x);

    }
    else if(x>z)
    {
        printf("%d is largest",x);

    }
    else if(y>x)
    {
         printf("%d is largest",y);

    }
    else if(y>z)
    {
         printf("%d is largest",y);

    }
    else if(z>y)
    {
         printf("%d is largest",z);

    }
    else if(z>x)
    {
         printf("%d is largest",z);

    }

    else
    {
        printf("They are equal\n");
    }
    return 0;

}
