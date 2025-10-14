//Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

#include <stdio.h>

int main() {
    int n, target;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
    
    int nums[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the elements of the sorted array: ");
        scanf("%d", &nums[i]);
    }
    
    printf("Enter the target element to search for: ");
    scanf("%d", &target);
    
    int first_occurrence = -1, last_occurrence = -1;
    
    // Finding the first occurrence
    for(int i = 0; i < n; i++) {
        if(nums[i] == target) {
            first_occurrence = i;
            break;
        }
    }
    
    // Finding the last occurrence
    for(int i = n - 1; i >= 0; i--) {
        if(nums[i] == target) {
            last_occurrence = i;
            break;
        }
    }
    
    printf("%d,%d\n", first_occurrence, last_occurrence);
    
    return 0;
}