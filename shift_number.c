#include <stdio.h>

void char_shifting(char s[50],int n);

int main()
{
    int n;
    char s[500];

    scanf("%s", &s);
    scanf("%d", &n);

    char_shifting(s, n);

    return 0;
}

void char_shifting(char s[50],int n)
{
    int i=0;
    while(s[i]!= '\0')
    {
        if(s[i]>= 'a' && s[i]<= 'z')
        {
            int value = s[i] += n;
            if(value > 122)
            {
                int v = s[i] - 122;
                int c = 97 + v -1;
                printf("%c", c);
            }
            else
            {
                printf("%c", value);
            }
        }
        i++;
    }
}
