#include<stdio.h>
void  print_hash(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("#");
    }
}
int main()
{
    print_hash(5);
    return 0;
}
