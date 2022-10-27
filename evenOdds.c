#include<stdio.h>
int main(){
long long int n,k,x,y;
scanf("%lld%lld",&n,&k);
y=(n+(n%2))/2;
x=(k>y)?2*(k-y):2*k-1;
printf("%lld",x);
return 0;}
