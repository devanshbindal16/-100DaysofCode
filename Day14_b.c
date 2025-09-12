//Q28: Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main(){
    int n, product = 1;
    printf("Ente a number to get product of even number from 1 to n : ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }
    printf("Product of first %d even number is : %d\n", n, product);
    return 0;
}