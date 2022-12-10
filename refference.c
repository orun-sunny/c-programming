
#include<stdio.h>
int findNewValue(int *newValue);
int main()
{
    int value =5;
    int refValue = findNewValue(&value);
    printf("ref Value : %d\n",refValue);
    return 0;
}

int findNewValue(int *refValue)
{
    return *refValue =5;
}
