//Q56: Read and print elements of a one-dimensional array.

#include <stdio.h>

int main() {
    int i, n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Enter an element : ");
        scanf("%d", &arr[i]);
    }

    printf("The elements in the array are : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}