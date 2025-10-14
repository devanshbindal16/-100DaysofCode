//Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, element;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
    
    int arr[n + 1]; // Create an array with one extra space for the new element
    for(int i = 0; i < n; i++) {
        printf("Enter the elements of the sorted array: ");
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    
    int i;
    // Find the appropriate position to insert the new element
    for(i = n - 1; (i >= 0 && arr[i] > element); i--) {
        arr[i + 1] = arr[i]; // Shift elements to the right
    }
    
    arr[i + 1] = element; // Insert the new element at the found position
    
    printf("Array after insertion: ");
    for(int j = 0; j <= n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");
    
    return 0;
}