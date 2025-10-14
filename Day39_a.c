//Q77: Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &cols);
    
    if(rows != cols) {
        printf("False\n");
        return 0; // A non-square matrix cannot have distinct diagonal elements
    }
    
    int matrix[rows][cols];
    
    // Reading the matrix elements
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Checking for distinct diagonal elements
    int is_distinct = 1; // Assume they are distinct
    for(int i = 0; i < rows; i++) {
        for(int j = i + 1; j < rows; j++) {
            if(matrix[i][i] == matrix[j][j]) {
                is_distinct = 0; // Found a duplicate
                break;
            }
        }
        if(!is_distinct) {
            break;
        }
    }
    
    if(is_distinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}