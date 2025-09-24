// Find the factorial of a given number.


#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;  // Use long long to handle large factorials

    // Ask user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for negative input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using for loop
        for (i = 1; i <= num; i++) {
            factorial *= i;
        }

        // Display the result
        printf("Factorial of %d is: %llu\n", num, factorial);
    }

    return 0;
}
