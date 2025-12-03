// Q146: Create Employee structure with nested Date structure for joining date and print details.

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joining;
};

int main() {
    struct Employee e;

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &e.joining.day, &e.joining.month, &e.joining.year);

    printf("\nName: %s | ID: %d | Joining Date: %02d/%02d/%04d",
           e.name, e.id, e.joining.day, e.joining.month, e.joining.year);

    return 0;
}
