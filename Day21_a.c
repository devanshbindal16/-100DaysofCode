//Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int num, original, first_digit, last_digit, num_digits = 0, place_value = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num; 

    last_digit = num % 10;

    while (num >= 10) {
        num /= 10;
        place_value *= 10;
        num_digits++;
    }
    first_digit = num;

    if (num_digits == 0) {
        printf("Number has only one digit, no swap needed.\n");
        return 0;
    }

    int middle_part = original % place_value / 10;
    int swapped_number = last_digit * place_value + middle_part * 10 + first_digit;

    printf("Number after swapping first and last digit: %d\n", swapped_number);
    return 0;
}