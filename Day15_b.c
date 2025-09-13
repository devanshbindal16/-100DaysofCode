//Q30: Write a program to reverse a given number.

#include <stdio.h>

int main(){
    int num, rev = 0, digit, a;
    printf("Enter a number to get its reverse : ");
    scanf("%d", &num);
    a = num;
    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    printf("Reverse of %d is : %d\n", a, rev);
    return 0;
}