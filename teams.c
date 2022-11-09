#include <stdio.h>
int main()
{
    int n,i,a,b,counter,j;
    scanf("%d",&n);
    int solved=0;
    for (i=0;i<n;i++)
    {
       counter =0;
       for (j=0;j<3;j++)
       {
           scanf("%d",&a);
           if(a==1)
            counter ++;
       }
        if(counter>=2)
            solved++;

    }
    printf("%d\n",solved);



    return 0;
}
