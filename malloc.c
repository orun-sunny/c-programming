struct employee
{
 char name[100];
 int age;
 float salary;
 char department[50];
} employee_one = {"Jack", 30, 1234.5, "Sales"};

struct employee *ptr = &employee_one;
int age = ptr->age;
