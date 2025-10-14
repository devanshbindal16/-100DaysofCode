//Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>

int main() {
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    
    int i = 0;
    
    // Print the first character as an initial
    if(name[i] != '\0' && name[i] != '\n') {
        printf("%c.", name[i]);
    }
    
    // Print initials for subsequent words until the last word
    while(name[i] != '\0') {
        if(name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != '\n') {
            // Check if it's not the last word
            int j = i + 1;
            while(name[j] != ' ' && name[j] != '\0' && name[j] != '\n') {
                j++;
            }
            if(name[j] != '\0' && name[j] != '\n') {
                printf("%c.", name[i + 1]);
            } else {
                // Print the last word in full
                printf(" %s", &name[i + 1]);
                break;
            }
        }
        i++;
    }
    
    printf("\n");
    return 0;
}