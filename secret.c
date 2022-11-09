#include<stdio.h>
int main()
{
    long long int ara[105];
    long long int n,i,j;
    char c;
    int counter=0;
    scanf("%d%% %c",&n,&c);
    for(i=1; i <= n; i++)
    {
        scanf("%d%%",&ara[105]);
        if(ara[i]%i==0)
        {


            counter=1;
            for(j=1; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    counter=0;
                    break;
                }
                if(counter==1)
                {
                    printf("Yes");
                }
                else
                {
                    printf("No");
                }
            }


        }

    }

    // for(j=1; j<=i; j++)
    // {

    //if(num%j==0)

    //{
    //counter=counter+1;

    //  }


    //}




    return 0;
}
