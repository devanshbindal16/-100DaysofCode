//Q83: Count vowels and consonants in a string.

#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int vowels = 0, consonants = 0;
    
    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        
        // Check if the character is an alphabet
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // Convert to lowercase for uniformity
            char lower_ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
            
            // Check if it's a vowel
            if(lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    
    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    
    return 0;
}