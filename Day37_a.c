//Q73: Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &cols);
    
    int matrix[rows][cols];
    int row_sums[rows];
    
    // Reading the matrix elements and calculating the sum of each row
    for(int i = 0; i < rows; i++) {
        row_sums[i] = 0; // Initialize sum for the current row
        for(int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
            row_sums[i] += matrix[i][j]; // Add to the current row's sum
        }
    }
    
    // Printing the sums of each row
    printf("Sum of each row: ");
    for(int i = 0; i < rows; i++) {
        printf("%d ", row_sums[i]);
    }
    printf("\n");
    
    return 0;
}