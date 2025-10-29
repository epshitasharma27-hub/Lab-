#include<stdio.h>


// Function declaration
int square(int n);

int main() {
    int num, result;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Function call
    result = square(num);

    // Display result
    printf("The square of %d is %d\n", num, result);

    return 0;
}

// Function definition
int square(int n) {
    return n * n;
}
