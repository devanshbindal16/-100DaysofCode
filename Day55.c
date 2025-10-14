//Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int nums[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the elements of the array: ");
        scanf("%d", &nums[i]);
    }
    
    int count = 0;
    int candidate = -1;
    
    // Finding a candidate for majority element using Boyer-Moore Voting Algorithm
    for(int i = 0; i < n; i++) {
        if(count == 0) {
            candidate = nums[i];
            count = 1;
        } else if(nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    
    // Verifying if the candidate is indeed the majority element
    count = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] == candidate) {
            count++;
        }
    }
    
    if(count > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }
    
    return 0;
}