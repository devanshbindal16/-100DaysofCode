//Q17: Write a program to find the roots of a quadratic equation and categorize them.
 
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, discriminant, root1, root2;
    printf("Enter the coefficient of x^2 : ");
    scanf("%d", &a);
    printf("Enter the coefficient of x : ");
    scanf("%d", &b);
    printf("Enter the constant term : ");
    scanf("%d", &c);

    discriminant = (pow(b,2)) - (4 * a * c);

    root1 = (-b + sqrt(discriminant)) / (2 * a);

    root2 = (-b - sqrt(discriminant)) / (2 * a);
    
    if (discriminant >= 0) {
        if (discriminant > 0) {
            printf("Roots of the given quadratic equation are real and distinctn\n");
            printf("Roots of the given quadratic equation are %d and %d\n", root1, root2);
        } else {
            printf("Roots of the given quadratic equation are real and equal\n");
            printf("Roots of the given quadratic equation are %d and %d\n", root1, root2);
        }
    } else {
        printf("Roots of the given quadratic equation are imaginary\n");
    }
    return 0;
}