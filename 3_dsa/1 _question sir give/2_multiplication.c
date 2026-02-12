#include <stdio.h>

int main() {
    int A[2][2] = {{1, 2}, {3, 4}};  // First matrix
    int B[2][2] = {{5, 6}, {7, 8}};  // Second matrix
    int result[2][2] = {0};           // Result matrix
    
    // Multiply: result[i][j] = sum(A[i][k] * B[k][j])
    result[0][0] = A[0][0]*B[0][0] + A[0][1]*B[1][0];
    result[0][1] = A[0][0]*B[0][1] + A[0][1]*B[1][1];
    result[1][0] = A[1][0]*B[0][0] + A[1][1]*B[1][0];
    result[1][1] = A[1][0]*B[0][1] + A[1][1]*B[1][1];
    
    printf("Matrix A:\n");
    printf("%d %d\n", A[0][0], A[0][1]);
    printf("%d %d\n", A[1][0], A[1][1]);
    
    printf("\nMatrix B:\n");
    printf("%d %d\n", B[0][0], B[0][1]);
    printf("%d %d\n", B[1][0], B[1][1]);
    
    printf("\nResult (A * B):\n");
    printf("%d %d\n", result[0][0], result[0][1]);  
    printf("%d %d\n", result[1][0], result[1][1]);  
    
    return 0;
}
