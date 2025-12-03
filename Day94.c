// Q144: Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void display(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %.0f", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student s;

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll_no);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("\n--- Student Details ---\n");
    display(s);  

    return 0;
}
