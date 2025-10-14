//Q87: Count spaces, digits, and special characters in a string.

#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int spaces = 0, digits = 0, special = 0;
    
    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        
        if(ch == ' ') {
            spaces++;
        } else if(ch >= '0' && ch <= '9') {
            digits++;
        } else if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // Do nothing for alphabetic characters
        } else if(ch != '\n') { // Exclude newline character added by fgets
            special++;
        }
    }
    
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    
    return 0;
}