//Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

#include <stdio.h>

int main() {
    int n, x;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the elements of the sorted array: ");
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the integer x: ");
    scanf("%d", &x);
    
    int left = 0, right = n - 1;
    int ceil_index = -1;
    
    while(left <= right) {
        int mid = left + (right - left) / 2;
        
        if(arr[mid] >= x) {
            ceil_index = mid; // Potential ceil found
            right = mid - 1; // Look for a smaller index
        } else {
            left = mid + 1; // Move to the right half
        }
    }
    
    printf("%d\n", ceil_index);
    
    return 0;
}