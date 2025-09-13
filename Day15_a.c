//Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    int num, a, fact = 1;
    printf("Enter a number to get its factorial : ");
    scanf("%d", &num);
     a = num;
    while (num > 0) {
        fact *= num;
        num--;
    }
    printf("Factorial of %d is : %d\n", a, fact);
}