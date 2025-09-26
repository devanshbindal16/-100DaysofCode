//Q55: Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are: ", n);
    for (int num = 2; num <= n; num++) {
        int isPrime = 1; 
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
        }
        if (isPrime) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}