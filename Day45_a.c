//Q89: Count frequency of a given character in a string.

#include <stdio.h>

int main() {
    char str[100], target;
    int frequency = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Enter the character to count: ");
    scanf(" %c", &target);
    
    // Counting the frequency of the target character
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == target) {
            frequency++;
        }
    }
    
    printf("%d\n", frequency);
    
    return 0;
}