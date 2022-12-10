#include <stdio.h>
int main()
{
    int x,y,max;
    printf("Enter the Values x and y: ");
    scanf("%d %d",&x,&y);
    max=x>y?x:y;
    printf("max of %d and %d is:  %d\n ",x,y,max);
    return 0;
}
