#include<stdio.h>
int main()
{
    int N=6;
    int ara[]={12,7,19,26,11,6};
    int i;

    int s=ara[0];
    for(i=0;i<N+1;i++)
    {
        if(ara[i]<s)
        {
            s=ara[i];
        }
    }
    printf("the min value is %d\n",s);
    return 0;
}
