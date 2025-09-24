// Check if a given number is prime or not

#include <stdio.h>
#include <stdbool.h>

int main() {
    int num, i;
    bool isPrime = true;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Handle edge cases
    if (num <= 1) {
        isPrime = false;
    } else {
        // Check divisibility from 2 to sqrt(num)
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is NOT a prime number.\n", num);
    }

    return 0;
}
