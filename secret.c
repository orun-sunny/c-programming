#include<stdio.h>
int main()
{

    long long int t,i,j;




    scanf("%lld",&t);
    long long int ara[t];

    for(i=1; i <=t; i++)
    {
        scanf("%lld",&ara[i]);
        //printf("%d",ara[i]);


    }



    for(i=1; i<=t; i++)
    {
        if (ara[i] == 0 || ara[i] == 1)
        {
            counter= 1;
        }
        for (j=2; j<ara[i]; j++)
        {
            if( ara[i]%j==0)
            {
                counter=1;

                break;
            }
        }


        if(counter==0)
        {
            printf("Yes");
        }
        else
            printf("\nNo");

    }










    return 0;
}
