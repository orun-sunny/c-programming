#include <stdio.h>
int main()
{
    int t,x,i;
    scanf("%d",&t);

    int ara[t];

    for(i=0; i <t; i++)
    {
        scanf("%d%%",&ara[i]);
    }
   int sum=0;

    for(i=0; i<t; i++)
    {
        if(ara[i]>=0 && ara [i] <=60)
        {
            sum=(60-ara[i])+(20*2)+(20*3);
            //printf("\n%d minutes ",sum );

        }
        if (ara[i]>=60 && ara[i]<=80)
        {
            sum=(80-ara[i])*2+(20*3);
            //printf("\n%d minutes ",sum );
        }
        if (ara[i]>=80 && ara[i]<=100)
        {
            sum =(100-ara[i])*3;
            // printf("\n%d minutes ",sum );
        }
        printf("%d minutes \n",sum);
    }








    return 0;
}
