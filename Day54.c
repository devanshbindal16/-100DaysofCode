//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    
    int total_sum = n * (n + 1) / 2; // Sum of first n natural numbers
    int left_sum = 0;
    
    for(int x = 1; x <= n; x++) {
        left_sum += x; // Sum from 1 to x
        int right_sum = total_sum - left_sum + x; // Sum from x to n
        
        if(left_sum == right_sum) {
            printf("%d\n", x); // Found the pivot integer
            return 0;
        }
    }
    
    printf("-1\n"); // No pivot integer found
    return 0;
}