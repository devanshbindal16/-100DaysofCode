//Q93: Check if two strings are anagrams of each other.

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count[256] = {0}; // Array to store the frequency of each character (ASCII range)
    
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    // Counting frequency of each character in the first string
    for(int i = 0; str1[i] != '\0'; i++) {
        if(str1[i] != '\n') { // Ignore newline character
            count[(unsigned char)str1[i]]++;
        }
    }
    
    // Decreasing frequency based on the second string
    for(int i = 0; str2[i] != '\0'; i++) {
        if(str2[i] != '\n') { // Ignore newline character
            count[(unsigned char)str2[i]]--;
        }
    }
    
    // Checking if all counts are zero
    int are_anagrams = 1; // Assume they are anagrams
    for(int i = 0; i < 256; i++) {
        if(count[i] != 0) {
            are_anagrams = 0; // Found a mismatch
            break;
        }
    }
    
    if(are_anagrams) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }
    
    return 0;
}