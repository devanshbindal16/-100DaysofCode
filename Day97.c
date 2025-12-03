// Q147: Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    FILE *fp;
    struct Employee e;
    int choice;

    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error creating file!");
        return 0;
    }

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Salary: ");
    scanf("%f", &e.salary);

    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    printf("\nEmployee Data Stored Successfully!\n\n");

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!");
        return 0;
    }

    fread(&e, sizeof(e), 1, fp);
    fclose(fp);

    printf("---- Employee Details Read from File ----\n");
    printf("Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Salary: %.2f\n", e.salary);

    return 0;
}
