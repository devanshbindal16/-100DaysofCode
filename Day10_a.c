//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the length of first side : ");
    scanf("%d", &a);
    printf("Enter the length of second side : ");
    scanf("%d", &b);
    printf("Enter the length of third side : ");
    scanf("%d", &c);
    if (a ==b && a == c) {
        printf("It is an Equilateral triangle\n");
    } else if (a == b || b == c || c == a) {
        printf("It is an Isosceles triangle\n");
    } else {
        printf("It is a Scalene triangle\n");
    }
    return 0;
}