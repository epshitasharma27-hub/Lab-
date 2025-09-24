//Compute a^b (a raised to the power b).

#include <stdio.h>

int main() {
    int a, b;
    long long result = 1;

    // Get input from user
    printf("Enter base (a): ");
    scanf("%d", &a);

    printf("Enter exponent (b): ");
    scanf("%d", &b);

    // Handle negative exponents (optional)
    if (b < 0) {
        printf("Negative exponents not supported in integer power calculation.\n");
        return 1;
    }

    // Compute a^b using loop
    for (int i = 1; i <= b; i++) {
        result *= a;
    }

    printf("%d^%d = %lld\n", a, b, result);

    return 0;
}
