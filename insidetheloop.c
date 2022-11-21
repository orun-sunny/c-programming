#include <stdio.h>
int main()
{
    int A[50][50];
    int i, j, M, N;
    int size;
    int rowsum, columnsum, diagonal;
    int magic = 0;

    printf("Enter row and column of matrix:\n");
    scanf("%d %d", &M, &N);
    if(M==N)
    {
        printf("Enter the full matrix \n");
        for(i=0; i<M; i++)
        {
            for(j=0; j<N; j++)
            {
                scanf("%d", &A[i][j]);
            }
        }



// calculate diagonal sum
        diagonal = 0;
        for(i=0; i<M; i++)
        {
            for(j=0; j<N; j++)
            {
                if(i==j)
                {
                    diagonal = diagonal + A[i][j];
                }
            }
        }

// calculate row sum
        for(i=0; i<M; i++)
        {
            rowsum = 0;
            for(j=0; j<N; j++)
            {
                rowsum = rowsum + A[i][j];
            }
            if(rowsum != diagonal)
            {
                printf("\n NO");
                return;
            }
        }

// calculate column sum
        for(i=0; i<M; i++)
        {
            columnsum = 0;
            for(j=0; j<N; j++)
            {
                columnsum = columnsum + A[j][i];
            }
            if(columnsum != diagonal)
            {
                printf("\nNO");
                return;
            }
        }

        printf("\nYES");
    }

  return 0;

}
