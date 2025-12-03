//Q120: Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    
    fgets(str, sizeof(str), stdin);

    int i = 0;

    if (str[i] >= 'a' && str[i] <= 'z') {
        str[i] = str[i] - 32;
    }

    for (i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("%s", str);

    return 0;
}
