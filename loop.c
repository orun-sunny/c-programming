#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float phone;
    char email[50];
    char address[50];
} s[5];

int main() {
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter email: ");
        scanf("%s", s[i].email);
         printf("Enter address: ");
        scanf("%s", s[i].address);
        printf("Enter phone: ");
        scanf("%f", &s[i].phone);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Email: ");
        puts(s[i].email);
        printf("address: ");
        puts(s[i].);
        printf("phone: %.1f", s[i].phone);
        printf("\n");
    }
    return 0;
}
