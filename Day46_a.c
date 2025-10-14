//Q91: Remove all vowels from a string.

#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int index = 0; // Index for the new string without vowels
    
    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        
        // Check if the character is a vowel (both lowercase and uppercase)
        if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
           ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            str[index++] = ch; // Keep the consonant
        }
    }
    
    str[index] = '\0'; // Null-terminate the modified string
    
    printf("String after removing vowels: %s", str);
    
    return 0;
}