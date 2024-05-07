#include <stdio.h>
int main()
{
    int A,B;
    printf("please enter two number:");
    scanf("%d %d",&A,&B);
    if( A>B)
    {
        printf("A is bigger");
    }
    else{
        if(A<B)
        {
            printf("B is bigger");
        }
        else{
                 printf("they are equal");

        }
    }

    return 0;




}
