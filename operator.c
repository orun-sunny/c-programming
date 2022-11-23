#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char k[21];
    int a,b;
    scanf("%s",&k);
    scanf("%d %d",&a,&b);
    int length = strlen(k);
   //  printf("%lld\n",len);
     int sum = 0;
    for (int i=0; i<length; i++)
    {
        if(k[i]=='+')
            sum += (a+b);
           // printf("%lld\n",a+b);

        else if(k[i]=='*')
            sum += (a*b);

    }
    printf("%d\n",sum);

    return 0;
}
