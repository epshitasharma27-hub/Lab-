/* Search for an element in a 2D array. 
Take an m×n matrix and a key. Search for the key and print its row and column index if found.*/
#include <stdio.h>

int main() {
    int m, n, i, j, key;
    
    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    
    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    int arr[m][n];

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Enter key to search
    printf("Enter the key to search: ");
    scanf("%d", &key);

    int found = 0;

    // Search for the key
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (arr[i][j] == key) {
                printf("Key %d found at Row %d, Column %d\n", key, i, j);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("Key %d not found in the matrix.\n", key);
    }

    return 0;
}
