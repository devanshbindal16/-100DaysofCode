//Q26: Write a program to print numbers from 1 to n.

#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer to print numbers from 1 to n : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
    return 0;
}