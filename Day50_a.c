//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>

int main() {
    char date[11]; // Format: dd/mm/yyyy (10 characters + null terminator)
    printf("Enter the date in dd/04/yyyy format: ");
    fgets(date, sizeof(date), stdin);
    
    // Check if the input format is correct
    if(strlen(date) != 10 || date[2] != '/' || date[5] != '/') {
        printf("Invalid date format\n");
        return 1;
    }
    
    // Replace "04" with "Apr"
    date[3] = 'A';
    date[4] = 'p';
    date[5] = 'r';

    // Replace "/" with "-"
    date[2] = '-';
    date[6] = '-';   
    
    printf("Date in dd-Apr-yyyy format: %s", date);
    
    return 0;
}