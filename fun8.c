#include <stdio.h>

// Function declaration
int isPalindrome(int n);

int main() {
    int num, result;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Function call
    result = isPalindrome(num);

    // Display result
    if (result == 1)
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);

    return 0;
}

// Function definition
int isPalindrome(int n) {
    int original = n, reversed = 0, remainder;

    while (n > 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n / 10;
    }

    if (original == reversed)
        return 1;  // Palindrome
    else
        return 0;  // Not palindrome
}
