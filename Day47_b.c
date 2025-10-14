//Q94: Find the longest word in a sentence.

#include <stdio.h>

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    
    int max_length = 0, current_length = 0;
    int start_index = -1, max_start_index = -1;
    
    for(int i = 0; ; i++) {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            if(current_length == 0) {
                start_index = i; // Mark the start of a new word
            }
            current_length++;
        } else {
            if(current_length > max_length) {
                max_length = current_length;
                max_start_index = start_index;
            }
            current_length = 0; // Reset for the next word
        }
        
        if(str[i] == '\0' || str[i] == '\n') {
            break; // End of string
        }
    }
    
    if(max_start_index != -1) {
        printf("The longest word is: ");
        for(int i = max_start_index; i < max_start_index + max_length; i++) {
            putchar(str[i]);
        }
        printf("\n");
    } else {
        printf("No words found.\n");
    }
    
    return 0;
}