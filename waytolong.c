#include <stdio.h>
#include<string.h>
int main()
{
    char name[100];
    fgets(name,sizeof(name),stdin);
    int l=strlen(name)-1;
    //printf("the length is %d\n",l);
    if(l>10)
    {
        //0abbreviate
        printf("%c%d%c",name[0],l-2,name[l-1]);
    }
    else
    {
        puts(name);
    }

   //  puts(name);
    return 0;
}
