//Q70: Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the elements of the array: ");
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number of positions to rotate (k): ");
    scanf("%d", &k);
    
    k = k % n; // In case k is greater than n
    
    // Rotate the array to the right by k positions
    int rotated[n];
    for(int i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }
    
    printf("Array after rotation: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");
    
    return 0;
}