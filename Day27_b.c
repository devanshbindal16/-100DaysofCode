//Q54: Write a program to print the following pattern:

#include <stdio.h>

int main() {

    // Print the upper half of the pattern
    for (int i = 1; i <= 4; i++) {
        // Print leading spaces
        for (int j = i; j < 4; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    // Print the lower half of the pattern
    for (int i = 4 - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 4; j > i; j--) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}