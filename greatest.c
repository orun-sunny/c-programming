#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d); //taking three elements as input
	if(a>b && a>c && a>d)
	{
	printf("Biggest Element: %d",a);
	}
	else if(b>c && b>a && b>d)
	{
	printf("Biggest Element: %d",b);
	}
	else if (c>a && c>b && c>d)
	{
	printf("Biggest Element: %d",c);

	}
	else
    {
        	printf("Biggest Element: %d",d);
    }
	return 0;
}

