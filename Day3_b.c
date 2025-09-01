//Q6: Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main(){
    int a, b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    int c;
    c = a;
    a = b;
    b = c;
    printf("After swapping :- \nA : %d \nB : %d\n", a, b);
    return 0;
}