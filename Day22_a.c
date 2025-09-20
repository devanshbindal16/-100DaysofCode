//Q43: Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int num, original_num, digit, factorial, sum_of_factorials = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original_num = num;

    while (num > 0) {
        digit = num % 10;
        factorial = 1;

        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }

        sum_of_factorials += factorial;
        num /= 10;
    }

    if (sum_of_factorials == original_num) {
        printf("%d is a Strong number\n", original_num);
    } else {
        printf("%d is not a strong number\n", original_num);
    }

    return 0;
}