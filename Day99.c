// Q149: Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!");
        return 0;
    }

    printf("Enter Name: ");
    scanf("%s", s->name);

    printf("Enter Roll Number: ");
    scanf("%d", &s->roll);

    printf("Enter Marks: ");
    scanf("%f", &s->marks);

    printf("\nName: %s | Roll: %d | Marks: %.0f", s->name, s->roll, s->marks);

    free(s);

    return 0;
}
