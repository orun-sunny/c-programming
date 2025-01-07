#include <stdio.h>
int main()
{

    int n,i;
    scanf("%d",&n);
    int choc=n;
    int pack= n;
    for(i=0;i>=4;i++)
    {
         choc +=(pack/4);
        pack = (pack/4)+(pack%4);

    }
    while(pack >=4)
    {
        choc +=(pack/4);
        pack = (pack/4)+(pack%4);
    }
    printf("%d",choc);



    return 0;
}
