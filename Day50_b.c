//Q100: Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    int len = strlen(str);
    if(len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    
    // Generate and print all substrings
    for(int i = 0; i < len; i++) {
        for(int j = i; j < len; j++) {
            for(int k = i; k <= j; k++) {
                putchar(str[k]);
            }
            if(i != len - 1 || j != len - 1) {
                putchar(','); // Print comma between substrings
            }
        }
    }
    putchar('\n'); // New line after printing all substrings
    
    return 0;
}