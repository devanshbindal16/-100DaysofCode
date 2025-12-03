//Q138: Print all enum names and integer values using a loop.

#include <stdio.h>

enum Signal { RED, YELLOW, GREEN };

int main() {
    enum Signal s;

    for (s = RED; s <= GREEN; s++) {
        switch (s) {
            case RED:
                printf("RED=%d\n", s);
                break;
            case YELLOW:
                printf("YELLOW=%d\n", s);
                break;
            case GREEN:
                printf("GREEN=%d\n", s);
                break;
        }
    }

    return 0;
}
