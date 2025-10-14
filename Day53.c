//Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the elements of the array: ");
        scanf("%d", &arr[i]);
    }
    
    int total_sum = 0;
    for(int i = 0; i < n; i++) {
        total_sum += arr[i];
    }
    
    int left_sum = 0;
    for(int i = 0; i < n; i++) {
        total_sum -= arr[i]; // Now total_sum is the right sum for index i
        
        if(left_sum == total_sum) {
            printf("%d\n", i); // Found the pivot index
            return 0;
        }
        
        left_sum += arr[i]; // Update left sum for next index
    }
    
    printf("-1\n"); // No pivot index found
    return 0;
}