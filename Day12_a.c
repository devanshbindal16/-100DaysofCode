//Q23: Write a program to calculate a library fine based on late days.

#include <stdio.h>

int main() {
    int days, fine;
    printf("Enter the number of days the book is late : ");
    scanf("%d", &days);
    
    if (days <= 5) {
        fine = days * 2;
        printf("Your fine for %d days is : %d\n", days, fine);
    } else if (days > 5 && days <= 10) {
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Your fine for %d days is : %d\n", days, fine);
    } else if (days > 10 && days <= 30) {
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Your fine for %d days is : %d\n", days, fine);
    } else {
        printf("Your membership is cancelled due to excessive late returns\n");
    }
    return 0;
}