//Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int num, binary = 0, place = 1, rem;
    printf("Enter a number : ");
    scanf("%d", &num);
    while (num > 0) {
        rem = num % 2;
        binary += rem * place;
        place *= 10;
        num /= 2;
    }
    printf("Binary representation of the given number is  : %d\n", binary);
    return 0;
}