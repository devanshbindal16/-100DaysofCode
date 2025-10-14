//Q75: Add two matrices.

#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;
    
    // Input dimensions for the first matrix
    printf("Enter the number of rows in the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns in the first matrix: ");
    scanf("%d", &cols1);
    
    int matrix1[rows1][cols1];
    
    // Reading the first matrix elements
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols1; j++) {
            printf("Enter element [%d][%d] of the first matrix: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    // Input dimensions for the second matrix
    printf("Enter the number of rows in the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns in the second matrix: ");
    scanf("%d", &cols2);
    
    // Check if addition is possible
    if(rows1 != rows2 || cols1 != cols2) {
        printf("Error: Matrices must have the same dimensions to be added.\n");
        return 1;
    }
    
    int matrix2[rows2][cols2];
    
    // Reading the second matrix elements
    for(int i = 0; i < rows2; i++) {
        for(int j = 0; j < cols2; j++) {
            printf("Enter element [%d][%d] of the second matrix: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    int sum[rows1][cols1];
    
    // Adding the two matrices
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols1; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    // Printing the resultant sum matrix
    printf("The sum of the two matrices is:\n");
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}