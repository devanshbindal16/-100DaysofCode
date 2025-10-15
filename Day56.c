//Q105: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

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
    
    int nextGreater[n];
    
    for(int i = 0; i < n; i++) {
        nextGreater[i] = -1; // Default value if no greater element is found
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                nextGreater[i] = arr[j];
                break;
            }
        }
    }
    
    printf("Next greater elements are:\n");
    for(int i = 0; i < n; i++) {
        printf("%d", nextGreater[i]);
        if (i != n - 1) {
            printf(", ");
        }
    }
    printf("\n");
    
    return 0;
}