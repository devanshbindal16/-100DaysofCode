//Q1: Write a program to input two numbers and display their sum.

#include <stdio.h>

int main(){
    int num1, num2;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);
    printf("Sum of given two number is = %d\n", num1+num2);
    return 0;
}