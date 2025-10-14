//Q71: Read and print a matrix.

#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &cols);
    
    int matrix[rows][cols];
    
    // Reading the matrix elements
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Printing the matrix
    printf("The matrix is:\n");
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}