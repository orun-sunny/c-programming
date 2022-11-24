#include <stdio.h>
#include<math.h>
int shat_present(int n);
int dgsum(int n);
last_dg(int n);


int main()
{
    int n;
    scanf("%d",&n);

    if(shat_present(n)==1 && dgsum(n)>10 && last_dg(n)==1)
    {
        printf("Farhan's number\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}

int shat_present(int n)
{
    while(n>0)
    {
        if (n%10 ==7)
            return 1;
        n /=10;
    }
    return 0;

}
int dgsum(int n)

{
    int sum =0;
    while(n>0)
    {
        sum +=(n%10);
        n/=10;
    }
}
last_dg(int n)
{
    int ld= n%10;
    if(ld==2 || ld==3 || ld==5 || ld==7)
        return 1;

}
