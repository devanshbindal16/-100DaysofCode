//Q76: Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &cols);
    
    if(rows != cols) {
        printf("False\n");
        return 0; // A non-square matrix cannot be symmetric
    }
    
    int matrix[rows][cols];
    
    // Reading the matrix elements
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Checking for symmetry
    int is_symmetric = 1; // Assume it is symmetric
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                is_symmetric = 0; // Found a mismatch
                break;
            }
        }
        if(!is_symmetric) {
            break;
        }
    }
    
    if(is_symmetric) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}