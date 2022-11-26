#include <stdio.h>

void trans(int a[3][3]);

int main()
{
    int N=3, M=3, i, j;

    int a[N][M];
    printf("Provide %dx%d matrix\n", N, M);
    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }
    trans(a);
    return 0;
}

//1 2 3
//2 3 4
//4 5 6
//4 5 6

void trans(int a[3][3])
{
    int i, j;
    printf("Trans Matrix\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}
