#include <stdio.h>
int main()
{


    int m,n;
    int s;
    scanf("%d %d",&m,&n);
    s=(m+1)/2;
    if(n<=s)
    {
          printf("%d\n", 2 * n - 1);
    }
    else
    {
    printf("%d\n", 2 * (n- s));

    }

    return 0;


}
