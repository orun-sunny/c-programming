#include<stdio.h>
int main()
{

    int t,i,j,x,sum;


    sum=0;

    scanf("%d",&t);


    for(i=0; i <t; i++)
    {
        scanf("%d",&x);
        //printf("%d",ara[i]);



    }
    for(i=0; i<t; i++)
    {
        if(t<=60)
        {
            sum=(60-t)+100;
            printf("\n%d",sum);
        }
        else if(t<=80)
        {
            sum=(80-t)*2+60;
            printf("\n%d",sum);
        }
        else if (t>80)
        {
            sum=(100-t)*3;
            printf("\n%d",sum);
        }
    }

    return 0;
}



#include <stdio.h>
int main()
{
    int t,x,i,sum;
    scanf("%d",&t);
    sum=0;
    int ara[t];
    for(i=0; i <t; i++)
    {
        scanf("%d%%",&ara[i]);
        for(i=0; i<t; i++)
        {
            if(ara[i]>=0&&ara [i] <=60)
            {
                sum=(60-ara[i])+100;
                printf("\n%d minutes ",sum );

            }
            else if (x<=80)
            {
                sum=(80-x)*2+60;
                printf("\n%d minutes ",sum );
            }
            else if (x>80)
            {
                sum =(100-x)*3;
                printf("\n%d minutes ",sum );
            }
        }


    }
    for(i=0; i<t; i++)
    {
        if(x<=60)
        {
            sum=(60-x)+100;
            printf("\n%d minutes ",sum );

        }
        else if (x<=80)
        {
            sum=(80-x)*2+60;
            printf("\n%d minutes ",sum );
        }
        else if (x>80)
        {
            sum =(100-x)*3;
            printf("\n%d minutes ",sum );
        }
    }




    return 0;
}

