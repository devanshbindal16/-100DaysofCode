//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main(){
    int radius;
    printf("Enter the radius of the circle : ");
    scanf("%d", &radius);
    printf("Area of the circle = %.2f\n", 3.14*radius*radius);
    printf("Circumference of the circle = %.2f\n", 2*3.14*radius);
    return 0;
}