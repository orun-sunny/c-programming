#include <stdio.h>
int main()
{


    int N=6;
    int ara [N];
    int i;
    for(i=0;i<N;i++)
    {
        scanf("%d",&ara[i]);

    }
    int m= ara[0];
    int secondMin=9999;
    for(i=0;i<N;i++)
    {
        if(ara[i]<m)
        {
            secondMin=m;
            m=ara[i];
        }
        else if(ara[i] <secondMin )
            secondMin = ara[i];

    }


    printf("the second minimum value is %d\n",secondMin);
    return 0;
}
