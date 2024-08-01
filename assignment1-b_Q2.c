#include <stdio.h> 
void transpose(int rows, int cols, int A[rows][cols], int B[cols][rows]) 
{     int i, j; 
    for (i = 0; i < rows; i++) 
        for (j = 0; j < cols; j++) 
            B[j][i] = A[i][j]; 
} 
int main() 
{     int rows, cols, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int A[rows][cols], B[cols][rows];
    printf("Enter the elements of the %dx%d matrix A:\n", rows, cols);
    for (i = 0; i < rows; i++) { 
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &A[i][j]); 
        }
    }
    transpose(rows, cols, A, B); 
    printf("Transpose of the matrix is:\n"); 
    for (i = 0; i < cols; i++) { 
        for (j = 0; j < rows; j++) 
            printf("%d ", B[i][j]); 
        printf("\n"); 
    } 
    return 0; 
}
