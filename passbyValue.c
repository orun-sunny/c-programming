#include<stdio.h>
int findNewValue(int newValue);
int main()
{
    int value =5;
    int newValue = findNewValue(value);
    printf("New Value : %d\n",newValue);
    return 0;
}

int findNewValue(int newValue)
{
    return newValue =5;
}
