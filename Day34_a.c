//Q67: Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int n, element, position;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n + 1]; // Create an array with one extra space for the new element
    for(int i = 0; i < n; i++) {
        printf("Enter the elements of the array: ");
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    
    printf("Enter the position to insert the element (0 to %d): ", n);
    scanf("%d", &position);
    
    if(position < 0 || position > n) {
        printf("Invalid position!\n");
        return 1;
    }
    
    // Shift elements to the right to make space for the new element
    for(int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[position] = element; // Insert the new element at the specified position
    
    printf("Array after insertion: ");
    for(int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}