// Q150: Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr;

    ptr = &s; 
    
    printf("Enter Name: ");
    scanf("%s", ptr->name);

    printf("Enter Roll Number: ");
    scanf("%d", &ptr->roll);

    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);

    printf("\nModified Data: Name: %s | Roll: %d | Marks: %.0f",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}
