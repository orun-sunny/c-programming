#include <stdio.h>
void printline();
int main()
{

    printf("statement 1\n");
    printline();
    printf("Statement 2\n");
    printline();

    return 0;
}
/*function*/
void printline()
{
    int i;
    for(i=0;i<30;i++)
    {

        printf("__");

    }
    printf("\n");

}

