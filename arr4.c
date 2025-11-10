/*WAP that reads two matrices A (m x n) and B(p x q) and computes the product A and B. Read 
matrix A and matrix B in row major order respectively. Print both the input matrices and resultant 
matrix with suitable headings and output should be in matrix format only. Program must check 
the compatibility of orders of the matrices for multiplication. Report appropriate message in case 
of incompatibility. */
#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;

    // Read dimensions of Matrix A
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &m, &n);

    int A[m][n];

    // Read Matrix A
    printf("Enter elements of Matrix A (row-wise):\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read dimensions of Matrix B
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &p, &q);

    int B[p][q];

    // Read Matrix B
    printf("Enter elements of Matrix B (row-wise):\n");
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Check compatibility for multiplication
    if(n != p) {
        printf("\nMatrix multiplication not possible!");
        printf("\n(Number of columns of A must be equal to number of rows of B)\n");
        return 0;
    }

    int C[m][q]; // Resultant matrix

    // Initialize result matrix to 0
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            for(k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print Matrix A
    printf("\nMatrix A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    // Print Matrix B
    printf("\nMatrix B:\n");
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++) {
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }

    // Print Resultant Matrix C
    printf("\nProduct of A and B (Matrix C):\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
