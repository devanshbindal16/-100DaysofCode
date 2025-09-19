//Q42: Write a program to check if a number is a perfect number.

#include <stdio.h>

int main() {
    int num, sum_of_divisors = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum_of_divisors += i;
        }
    }

    if (sum_of_divisors == num && num != 0) {
        printf("%d is a Perfect number\n", num);
    } else {
        printf("%d is not a perfect number\n", num);
    }

    return 0;
}