#include<stdio.h>

int main()
{
    int matrix[120][120],matrix2[120][120];
    int a,b;

    scanf("%d %d",&a,&b);

    for(int i=0;i<b;i++)
        for(int j=0;j<a;j++)
           scanf("%d",&matrix[i][j]);

    for(int i=0;i<b;i++)
        for(int j=0;j<a;j++)
           scanf("%d",&matrix2[i][j]);

        for(int i=0;i<b;i++)
        {

            for(int k=0;k<a;k++)
        {
            matrix[i][k] =matrix[i][k]+matrix2[i][k];
            printf("%d ",matrix[i][k]);
        }
        printf("\n");
        }


    return 0;
}
