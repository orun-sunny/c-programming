#include <stdio.h>
 void print_area(float);

 int main()
 {

     float radius;
     printf("Enter radius of circus: ");
     scanf("%f" , &radius);
     print_area(radius);


     return 0;
 }

 void print_area(float r)
 {

     float area;
     area =3.14* r* r;
     printf("The area of circle is %f\n", area);

 }
