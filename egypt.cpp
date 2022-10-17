#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    int a,b,c,asqr,bsqr,csqr;
    while(1){
        scanf("%d%d%d",&a,&b,&c);
        if(a==0&&b==0&&c==0)
            break;
        asqr=a*a;
        bsqr=b*b;
        csqr=c*c;
        if((asqr+bsqr==csqr)||(bsqr+csqr==asqr)||(csqr+asqr==bsqr))

        printf("right\n");
        else printf("wrong\n");


    }
    return 0;
}

