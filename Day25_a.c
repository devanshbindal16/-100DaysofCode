//Q49: Write a program to print the following pattern:

#include <stdio.h>

int main() {
    for(int i = 5; i >= 1; i--) {
        for(int j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}