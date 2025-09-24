// Print all even numbers between 1 and 50.

#include <stdio.h>

int main() {
    int i;

    printf("Even numbers between 1 and 50 are:\n");

    // Start from 2 and increment by 2 to get even numbers
    for (i = 2; i <= 50; i += 2) {
        printf("%d ", i);
    }

    printf("\n"); // For a clean line after output
    return 0;
}
