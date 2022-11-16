#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int k=101;
    int i;
    scanf("%d",&n);
    int ara[n];




    /* Outer loop */
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }


    int m =-1;
    for(i=0;i<n;i++)
    {
        if(ara[i]>m)
        {
            m=ara[i];
        }
    }
    //{
       // if(ara[i]<k )

          //  ans++;
    //}





    //printf("%d\n",m);

        for(i=0; i<n; i++)
    {
       int v = m -ara[i];
       printf("%d ",v);

    }
    return 0;
}
