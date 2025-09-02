//Q8: Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main(){
    int n;
    printf("Ente a number : ");
    scanf("%d", &n);
    int sum;
    sum  = (n*(n+1))/2;
    printf("Sum of first %d natural number = %d\n", n, sum);
    return 0;
}