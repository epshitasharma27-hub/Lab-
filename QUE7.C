// Calculate the sum of digits of a given integer.

#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    // Ask the user to input a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Make sure num is positive for digit extraction
    if (num < 0) {
        num = -num;
    }

    // Loop to extract and sum digits
    while (num > 0) {
        digit = num % 10;      // Get the last digit
        sum += digit;          // Add it to the sum
        num = num / 10;        // Remove the last digit
    }

    // Output the result
    printf("Sum of digits: %d\n", sum);

    return 0;
}
