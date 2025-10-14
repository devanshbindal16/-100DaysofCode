//Q61: Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int n, target, found_index = -1;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the elements of the array: ");
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search for: ");
    scanf("%d", &target);
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            found_index = i;
            break;
        }
    }
    
    if(found_index != -1) {
        printf("Found at index %d\n", found_index);
    } else {
        printf("-1\n");
    }
    
    return 0;
}