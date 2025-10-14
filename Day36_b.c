//Q72: Find the sum of all elements in a matrix.

#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &cols);
    
    int matrix[rows][cols];
    int sum = 0;
    
    // Reading the matrix elements and calculating the sum
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    
    printf("The sum of all elements in the matrix is: %d\n", sum);
    
    return 0;
}