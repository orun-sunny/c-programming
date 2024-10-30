#include <stdio.h>
int main()
{
    int N;
    printf("Enter a positive integer: ");
    scanf("%d",&N);
    int array[N];
    printf("Enter %d elements:\n",N);
    for(int i =0;i<N ;i++){
         scanf("%d", &array[i]);
    }
    for (int i = N-1; i >=0 ; i--) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;



}
