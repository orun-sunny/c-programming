#include <stdio.h>

void consecutive_even_nums(int num);

int main()
{
    int T;
    scanf("%d", &T);

    for(int i=0; i<T; i++)
    {
        int N;
        scanf("%d", &N);

        consecutive_even_nums(N);
    }


    return 0;
}

void consecutive_even_nums(int num)
{
    int i;
    for(i=2; i<=num/3; i+=2)
    {
        int sum = i + i+2 + i+4 + i+6;
        if(sum == num)
        {
            printf("%d %d %d %d\n", i, i+2, i+4, i+6);
            break;
        }
    }
}
