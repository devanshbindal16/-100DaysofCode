//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>
#include <string.h>

enum Traffic { RED, YELLOW, GREEN };

int main() {
    char input[20];
    enum Traffic signal;

    printf("Enter signal (RED, YELLOW, GREEN): ");
    scanf("%s", input);

    if (strcmp(input, "RED") == 0)
        signal = RED;
    else if (strcmp(input, "YELLOW") == 0)
        signal = YELLOW;
    else if (strcmp(input, "GREEN") == 0)
        signal = GREEN;
    else {
        printf("Invalid input!");
        return 0;
    }

    switch (signal) {
        case RED:    printf("Stop"); break;
        case YELLOW: printf("Wait"); break;
        case GREEN:  printf("Go"); break;
    }

    return 0;
}
