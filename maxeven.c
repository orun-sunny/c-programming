#include <stdio.h>

int main()
{
    int T, i,b, ev_max1=0, ev_max2=0, o_max1=0, o_max2=0, ev_sum=0, o_sum=0;
    scanf("%d", &T);

    int a[22];
    for(i=0; i<T; i++)
    {
        scanf("%d ", &a[i]);
    }

    for(b=0; b<T; b++)
    {
        if(a[i] > ev_max1 && a[i]%2 == 0)
        {
            ev_max1 = a[i];
        }
        if(a[i] > o_max1 && a[i]%2 == 1)
        {
            o_max1 = a[i];
        }

    }


    for(i=0; i<T; i++)
    {
        if(ev_max2<a[i] && a[i] != ev_max1 && a[i]%2==0)
        {
            ev_max2 = a[i];
        }
        else if(o_max2<a[i] && a[i] != o_max1 && a[i]%2==1)
        {
            o_max2 = a[i];
        }

    }

    ev_sum = ev_max1 + ev_max2;
    o_sum = o_max1 + o_max2;


    if(ev_sum >= o_sum)
        printf("%d", ev_sum);
    else
        printf("%d", o_sum);


    return 0;
}
