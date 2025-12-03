//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>
#include <string.h>

enum Operation { ADD, SUBTRACT, MULTIPLY };

int main() {
    char input[20];
    int a, b;
    enum Operation choice;

    scanf("%s %d %d", input, &a, &b);

    if (strcmp(input, "ADD") == 0)
        choice = ADD;
    else if (strcmp(input, "SUBTRACT") == 0)
        choice = SUBTRACT;
    else if (strcmp(input, "MULTIPLY") == 0)
        choice = MULTIPLY;
    else {
        printf("Invalid operation");
        return 0;
    }

    switch (choice) {
        case ADD:
            printf("%d", a + b);
            break;
        case SUBTRACT:
            printf("%d", a - b);
            break;
        case MULTIPLY:
            printf("%d", a * b);
            break;
    }

    return 0;
}
