//Q7: Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main(){
    int a, b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    int c = a+b;
    a = c-a;
    b = c-b;
    printf("After swapping :- \nA : %d \nB : %d\n", a, b);
    return 0;
}