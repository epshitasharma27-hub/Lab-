#include <stdio.h>

// Function declaration
int max(int a, int b);

int main() {
    int num1, num2, result;

    // Input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Function call
    result = max(num1, num2);

    // Display result
    printf("The maximum of %d and %d is %d\n", num1, num2, result);

    return 0;
}

// Function definition
int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}
