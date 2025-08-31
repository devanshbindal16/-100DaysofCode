//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main(){
    int length, breadth;
    printf("Enter the length of the rectangle : ");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle : ");
    scanf("%d", &breadth);
    printf("Area of the rectangle = %d\n", length*breadth);
    printf("Perimeter of the rectangle = %d\n", 2*(length+breadth));
    return 0;
}