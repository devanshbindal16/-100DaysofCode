//Q92: Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int count[26] = {0}; // Array to store the count of each lowercase alphabet
    
    // Counting occurrences of each character
    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if(ch >= 'a' && ch <= 'z') {
            count[ch - 'a']++;
        }
    }
    
    // Finding the first repeating character
    char first_repeating = '\0';
    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if(ch >= 'a' && ch <= 'z' && count[ch - 'a'] > 1) {
            first_repeating = ch;
            break;
        }
    }
    
    if(first_repeating != '\0') {
        printf("%c\n", first_repeating);
    } else {
        printf("-1\n");
    }
    
    return 0;
}