#include<stdio.h>
struct Course {
    char name[];
    int price;
};

int main()
{
    struct Course c1 ={"C Programming",5000};
    return 0;
}
