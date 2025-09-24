// Print the multiplication table of a number entered by the user

#include <stdio.h>

int main() {
    int num, i;

    // Ask user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Print the multiplication table
    printf("Multiplication table of %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
