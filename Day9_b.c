//Q18: Write a program to assign grades based on a percentage input.

#include <stdio.h>

int main() {
    int percentage;
    printf("Enter the percentage : ");
    scanf("%d", &percentage);

    if (percentage >= 90 && percentage <= 100) {
        printf("Grade : A\n");
    } else if (percentage >= 80 && percentage < 90) {
        printf("Grade : B\n");
    } else if (percentage >= 70 && percentage < 80) {
        printf("Grade : C\n");
    } else if (percentage >= 60 && percentage < 70) {
        printf("Grade : D\n");
    } else if (percentage >=0 && percentage < 60) {
        printf("Grade : F\n");
    } else {
        printf("Invalid percentage\n");
    }
}