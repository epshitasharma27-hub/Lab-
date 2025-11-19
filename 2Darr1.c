/*Find the sum of all elements in a 2D array. 
Write a program to take an m×n matrix as input and calculate the total sum of all elements. */
#include <stdio.h>

int main() {
    int m, n;
    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    int arr[m][n];
    int sum = 0;

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];   // Add to sum
        }
    }

    // Output the sum
    printf("Total sum of all elements = %d\n", sum);

    return 0;
}
