//Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    
    int start = 0; // Start index of a word
    for(int i = 0; ; i++) {
        // Check for space or end of string
        if(str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            int end = i - 1; // End index of the word
            
            // Reverse the word from start to end
            while(start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            
            start = i + 1; // Move to the start of the next word
        }
        
        if(str[i] == '\0' || str[i] == '\n') {
            break; // End of string
        }
    }
    
    printf("Modified sentence: %s", str);
    
    return 0;
}