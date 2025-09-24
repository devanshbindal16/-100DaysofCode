//Q52: Write a program to print the following pattern:

#include <stdio.h>

int main() {
    int groups[] = {1, 3, 5, 3, 1};
    int totalGroups = sizeof(groups) / sizeof(groups[0]);

    for (int i = 0; i < totalGroups; i++) {
        for (int j = 0; j < groups[i]; j++) {
            printf("*\n");
        }
        if (i < totalGroups - 1) {  
            printf("\n"); 
        }
    }

    return 0;
}