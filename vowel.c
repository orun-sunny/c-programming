#include <stdio.h>
int main()
{
    char sen[1000];
    //scanf("%s",sen);
    gets(sen);
    int i=0;
    while(sen[i]!='\0')
    {
        if(sen[i]=='a')
        i++;
    }
   // printf("%s",sen);
    return 0;
}
