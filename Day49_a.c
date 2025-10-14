//Q97: Print the initials of a name.

#include <stdio.h>

int main() {
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    
    // Print the first character as an initial
    if(name[0] != '\0' && name[0] != '\n') {
        printf("%c.", name[0]);
    }
    
    // Print initials for subsequent words
    for(int i = 1; name[i] != '\0'; i++) {
        if(name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != '\n') {
            printf("%c.", name[i + 1]);
        }
    }
    
    printf("\n");
    return 0;
}