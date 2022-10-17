#include<stdio.h>
int main()
{
int h,h1,m1,h2,m2,m;
while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2)==4){
    if(h1==0&&m1==0&&h2==0&&m2==0)
    break;
    if(h1==0)
    h1=24;
    if(h2==0)
    h2=24;
    if(h1==h2&&m1>m2){
      m=1440+(60-m1)-(60-m2);
      }
      else if(h1==h2&&m1<m2){
      m=m2-m1;
      }
      else if(h1>h2){
      h=24-(h1-h2);
      m=(h*60)+(60-m1)-(60-m2);
      }
      else{
        h=h2-h1;
        m=(h*60)-(60-m2)+(60-m1);
        }

printf("%d\n",m);
}
return 0;
}
