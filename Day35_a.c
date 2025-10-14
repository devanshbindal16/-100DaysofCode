//Q69: Find the second largest element in an array.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    if(n < 2) {
        printf("Array must contain at least two elements.\n");
        return 1;
    }
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the elements of the array: ");
        scanf("%d", &arr[i]);
    }
    
    int first, second;
    first = second = -2147483648; // Initialize to minimum integer value
    
    for(int i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    
    if(second == -2147483648) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", second);
    }
    
    return 0;
}