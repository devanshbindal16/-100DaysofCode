//Q85: Reverse a string.

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
    
    // Reversing the string in place
    for(int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
    
    printf("Reversed string: %s", str);
    
    return 0;
}