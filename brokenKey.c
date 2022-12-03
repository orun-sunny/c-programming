#include <stdio.h>
#include <string.h>
void broken_key(char ch[]);
int main()
{
    char ch[100];
    scanf("%s", ch);
    broken_key(ch);
    return 0;
}


    void broken_key(char ch[])
    {
        for (int i = 0; i < strlen(ch); i++)
        {
            if (i % 2 == 0)
            {
                printf("%c", ch[i]);
            }
            else
            {
                printf("%c", ch[i]);
                printf("%c", ch[i]);
            }
        }
    }



