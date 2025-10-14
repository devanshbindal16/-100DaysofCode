//Q95: Check if one string is a rotation of another.

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    // Calculate lengths of both strings
    int len1 = 0, len2 = 0;
    while(str1[len1] != '\0') len1++;
    while(str2[len2] != '\0') len2++;
    
    // Remove newline character if present
    if(len1 > 0 && str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0';
        len1--;
    }
    if(len2 > 0 && str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
        len2--;
    }
    
    // If lengths are not equal, they cannot be rotations
    if(len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }
    
    // Create a new string that is str1 concatenated with itself
    char concat[200];
    for(int i = 0; i < len1; i++) {
        concat[i] = str1[i];
    }
    for(int i = 0; i < len1; i++) {
        concat[len1 + i] = str1[i];
    }
    concat[2 * len1] = '\0'; // Null-terminate the concatenated string
    
    // Check if str2 is a substring of concat
    int is_rotation = 0;
    for(int i = 0; i <= 2 * len1 - len2; i++) {
        int j;
        for(j = 0; j < len2; j++) {
            if(concat[i + j] != str2[j]) {
                break;
            }
        }
        if(j == len2) {
            is_rotation = 1;
            break;
        }
    }
    
    if(is_rotation) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }
    
    return 0;
}