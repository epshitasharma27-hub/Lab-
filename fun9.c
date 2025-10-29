#include <stdio.h>

// Function declaration
int sumOfDigits(int n);

int main() {
    int num, sum;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Function call
    sum = sumOfDigits(num);

    // Display result
    printf("The sum of digits of %d is %d\n", num, sum);

    return 0;
}

// Function definition
int sumOfDigits(int n) {
    int sum = 0;

    while (n != 0) {
        sum += n % 10;  // Add last digit to sum
        n = n / 10;      // Remove last digit
    }

    return sum;
}

