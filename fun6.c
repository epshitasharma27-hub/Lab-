#include <stdio.h>

// Function declaration
int isPrime(int n);

int main() {
    int num, result;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Function call
    result = isPrime(num);

    // Display result
    if (result == 1)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

// Function definition
int isPrime(int n) {
    if (n <= 1)
        return 0;  // Not prime

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;  // Not prime
    }

    return 1;  // Prime
}
