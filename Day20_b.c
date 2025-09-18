//Q40: Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    int num, original, complement = 0, place = 1;
    printf("Enter a binary number: ");
    scanf("%d", &num);
    original = num; 
    
    while (num != 0) {
        int digit = num % 10;
        int flipped_digit = (digit == 0) ? 1 : 0; 
        complement += flipped_digit * place;
        place *= 10;
        num /= 10;
    }
    
    printf("1's complement of %d is: %d\n", original, complement);
    return 0;
}