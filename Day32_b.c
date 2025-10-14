//Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    
    int count[10] = {0}; // Array to store the count of each digit (0-9)
    
    // Counting occurrences of each digit
    while(number != 0) {
        int digit = number % 10;
        count[digit]++;
        number /= 10;
    }
    
    int max_count = 0;
    int most_frequent_digit = -1;
    
    // Finding the digit with the maximum count
    for(int i = 0; i < 10; i++) {
        if(count[i] > max_count) {
            max_count = count[i];
            most_frequent_digit = i;
        }
    }
    
    printf("The digit that occurs the most times is: %d\n", most_frequent_digit);
    
    return 0;
}