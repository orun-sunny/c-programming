#include <stdio.h>
#include <string.h>

void swap(char *x, char *y);
void itwill_sort(char a[100],int len);

int main()
{
    char s[50];
    scanf("%s", &s);

    int n = strlen(s);

    itwill_sort(s, n);

    for(int k=0; k<n; k++)
        printf("%c", s[k]);

    return 0;
}

void itwill_sort(char a[50],int length)
{
    int i,j;
    for(i=0; i<length-1; i++)
    {
        for(j=i; j<length; j++)
        {
            if(a[i] < a[j])
                swap(&a[i], &a[j]);
        }
    }
}

void swap(char *x, char *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
