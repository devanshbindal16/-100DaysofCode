//Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int num, rev = 0, orig, digit;
    printf("Enter a number : ");
    scanf("%d", &num);
    orig = num;
    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    if (orig == rev) {
        printf("%d is a palindrome number\n", orig);
    } else {
        printf("%d is not a palindrome number\n", orig);
    }
    return 0;
}