//Q86: Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Finding the length of the string
    int length = 0;
    while(str[length] != '\0') {
        length++;
    }
    
    // Subtracting 1 to exclude the newline character added by fgets
    if(length > 0 && str[length - 1] == '\n') {
        length--;
    }
    
    // Checking for palindrome
    int is_palindrome = 1; // Assume it is a palindrome
    for(int i = 0; i < length / 2; i++) {
        if(str[i] != str[length - 1 - i]) {
            is_palindrome = 0; // Found a mismatch
            break;
        }
    }
    
    if(is_palindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    
    return 0;
}