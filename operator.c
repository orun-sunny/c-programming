#include<stdio.h>

int main()

{

    int n,a, b,res;
    //int s[]=<20;

    char c[n];
    scanf("%s",&c);
    //int n;
    //scanf("%d",&n);
    //printf ("Enter any one operator +, -, *, / n");
    // char c;


    //scanf("%c", &c);

    printf ("\n Enter two numbers \n");
    scanf ("%d %d",&a, &b);
    for(int i=0; i<n-1; i++)
    {
        if (c=='+')
        {
            res=a+b;
            printf("\n The sum is %d",res);
        }



        else if(c== '*')
        {
            res=a*b+(a+b);
            printf("\n The product is %d",res);
        }


        else
        {
            printf ("\n Invalid entry");
        }
    }



    return 0;

}
