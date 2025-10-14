//Q68: Delete an element from an array.

#include <stdio.h>

int main() {
    int n, element, found_index = -1;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the elements of the array: ");
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to delete: ");
    scanf("%d", &element);
    
    // Find the index of the element to delete
    for(int i = 0; i < n; i++) {
        if(arr[i] == element) {
            found_index = i;
            break;
        }
    }
    
    if(found_index == -1) {
        printf("Element not found in the array.\n");
        return 1;
    }
    
    // Shift elements to the left to overwrite the deleted element
    for(int i = found_index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    printf("Array after deletion: ");
    for(int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}