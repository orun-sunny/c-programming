#include<stdio.h>
#include<string.h>


int is_available(char str[],int len,int i)
{
    int count =0;
    for(int j=0; j<len; j++)
    {
        if( 97+i == str[j])
        {
            count++;
        }
    }
    return count;
}
void print(int n, char c)
{
    for(int i=0; i<n; i++)
        printf("%c",c);
}

int main()
{
    char str[1000];
    scanf("%s",str);
    int len,count =0;

    len = strlen(str);
    for(int i=0; i<26; i++)
    {
        count = is_available(str,len,i);
        print(count,97+i);
    }



    return 0;
}


