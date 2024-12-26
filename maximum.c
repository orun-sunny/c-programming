
#include <stdio.h>
int main()
{
    int N =6;
    int ara[N];
    int i;
    int m = ara[0];
    int min;
    for(i=0; i<N; i++)
    {
        scanf("%d",&ara[i]);

    }


    for(i=0; i<N; i++)
    {
        if(ara[i] <m)
        {
            m=ara[i];
        }
    }
    for(i=0;i<N;i++){
        if (ara[i] >m && ara[i]<min )
        {
            min = ara[i];
        }
    }

    printf("the  2nd minimum value is %d\n",min);
    return 0;




}
