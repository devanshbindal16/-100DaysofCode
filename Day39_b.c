//Q78: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &cols);
    
    if(rows != cols) {
        printf("The matrix must be square (rows must equal columns).\n");
        return 1; // Exit if the matrix is not square
    }
    
    int matrix[rows][cols];
    int diagonal_sum = 0;
    
    // Reading the matrix elements and calculating the sum of main diagonal elements
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
            if(i == j) {
                diagonal_sum += matrix[i][j]; // Add to diagonal sum if it's a main diagonal element
            }
        }
    }
    
    printf("The sum of the main diagonal elements is: %d\n", diagonal_sum);
    
    return 0;
}