#include <stdio.h>
int main()
{

    int N=6;
    int ara[] =  {123,7,19,26,11,6};
    int i ;
    int m = ara [0];
    for (i =0;i<N ;i ++) {
        if(ara[i] <m){
            m= ara[i];

        }
    }
    printf("this minimum value is %d\n",m);
    return 0;
}
