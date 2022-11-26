#include <stdio.h>
void Check_grade(int n);
int main()
{
    int n;
    scanf("%d",&n);
    Check_grade(n);
    return 0;
}

    void Check_grade(int n)
    {
        if(n>=80 && n<=100)
            printf("A");
        else if(n>=60 && n<=79)
            printf("B");
        if(n>=40 && n<=59)
            printf("C");
        else if(n>=0 && n<=39)
            printf("F");

    }


