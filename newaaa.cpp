#include <stdio.h>
int main()
{
    char *ptr;
    char string[] ="Hello world";
    ptr = string;
    ptr += 6;
    printf("%s",ptr);
    return 0;

}
