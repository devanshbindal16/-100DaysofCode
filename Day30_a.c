//Q59: Count even and odd numbers in an array.

#include <stdio.h>

int main() {
    int n, even_count = 0, odd_count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the elements of the array: ");
        scanf("%d", &arr[i]);
        
        if(arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    printf("Even=%d, Odd=%d\n", even_count, odd_count);
    return 0;
}