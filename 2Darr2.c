/*Find the largest element in a 2D array. 
Traverse the matrix and return the maximum value present in it.*/
#include <stdio.h>

int main() {
    int m, n;
    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    int arr[m][n];

    // Input matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Assume first element is largest
    int max = arr[0][0];

    // Traverse the entire matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    printf("The largest element in the matrix is: %d\n", max);

    return 0;
}
