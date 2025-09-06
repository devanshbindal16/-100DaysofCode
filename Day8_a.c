//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>

int main() {
    char ch;
    printf("Enter a Character : ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("It is a Uppercase alphabet");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("It is a Loweracse alphabet");
    } else if (ch >= '0' && ch <= '9') {
        printf("It is a Digit");
    } else {
        printf("It is a Special character");
    }
    return 0;
}