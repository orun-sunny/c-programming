#include <stdio.h>
int main() {
	int x, y;
	int div_result;
    printf("Input two numbers: ");
	printf("\n Enter the first number: ");
    scanf("%d", &x);
    printf(" Enter the first number: ");
    scanf("%d", &y);

   if(y != 0)
     {
   		div_result = x/y;
		printf("%d\n The first number is divisible by the second number", div_result);
	 } else if(x!= 0)
	 {

        div_result = y/x;
        printf("%d\n The second number is divisible by the first number", div_result);

    }




    else
    {
	 		printf("Division not possible.\n");
    }


  return 0;
}

