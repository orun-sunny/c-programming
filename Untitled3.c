#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char c[n];
    scanf("%s",&c);
    //printf("%s",c);
    int cur = 1;
    int best = 0;

    for(int i=0;i<n-1;i++)
    {
        if(c[i]==c[i+1])
        {
            cur++;
            if(cur>best)best = cur;
        }
        else
        {
            cur = 1;
            if(cur>best)best = cur;
        }
    }
    printf("%d",best);


    return 0;
}
