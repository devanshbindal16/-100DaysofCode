//Q82: Print each character of a string on a new line.

#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Printing each character on a new line
    for(int i = 0; str[i] != '\0'; i++) {
        // Exclude the newline character added by fgets
        if(str[i] != '\n') {
            printf("%c\n", str[i]);
        }
    }
    
    return 0;
}