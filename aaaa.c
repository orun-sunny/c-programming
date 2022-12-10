

#include<stdio.h>
#include<string.h>

int arr[26];

void print(int arr[])
{
    for(int i=0; i<26; i++)
        {int temp = arr[i];
        for (int j = 0 ; j<temp;j++)
        {
            printf("%c",'a'+i);
        }}
}

int main()
{
    char str[1000];
    scanf("%s",str);
    int len,count =0;

    len = strlen(str);
    for(int i=0; i<len; i++)
    {

        arr[str[i]-'a']++;
    }
    print (arr);



    return 0;
}


