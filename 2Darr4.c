/* Find the transpose of a matrix. 
Given a matrix A of size m×n, print its transpose Aᵀ of size n×m.*/
#include <stdio.h>

int main() {
    int m, n;
    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    int A[m][n], T[n][m];

    // Input matrix A
    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Compute transpose T = Aᵀ
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            T[j][i] = A[i][j];
        }
    }

    // Print transpose
    printf("\nTranspose of the matrix (Aᵀ):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}
