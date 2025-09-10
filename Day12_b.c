//Q24: Write a program to calculate an electricity bill based on units consumed.

#include <stdio.h>

int main() {
    int units, bill;
    printf("Enter the number of units consumed : ");
    scanf("%d", &units);
    if (units <= 100) {
        bill = units * 5;
        printf("You consumed %d units, So your bill is : %d\n", units, bill);
    } else if (units > 100 && units <= 200) {
        bill = (100 * 5) + ((units - 100) * 9);
        printf("You consumed %d units, So your bill is : %d\n", units, bill);
    } else {
        bill = (100 * 5) + (100 * 9) + ((units - 200) * 16);
        printf("You consumed %d units, So your bill is : %d\n", units, bill);
    }
    return 0;
}