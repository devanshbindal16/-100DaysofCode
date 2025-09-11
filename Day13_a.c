//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    int num1, num2, choice;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);
    printf("1. Addition (+)\n");
    printf("2. Sibtraction (-)n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%)\n");
    printf("Enter your choice (1 - 5) : ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Addition of %d and %d is : %d\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("Diference of %d and %d is : %d\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("Product of %d and %d is : %d\n", num1, num2, num1 * num2);
            break;
        case 4:
            printf("Quotient of %d and %d is : %d\n", num1, num2, num1 / num2);
            break;
        case 5:
            printf("Remainder (Modulus) of %d and %d is : %d\n", num1, num2, num1 % num2);
            break;
        default:
        printf("Invalid choice! Please select a valid operation.\n");
    }
    return 0;
}