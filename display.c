/* 1. WAP to enter numbers till the user wants. At the end, display
 the count of positive, negative, and zeroes entered */

  #include <stdio.h>
 int main() {
    int num, pos = 0, neg = 0, zero = 0;
    char choice;
    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else
            zero++;
        printf("Do you want to continue (y/n)? ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    printf("\nCount of Positive numbers = %d", pos);
    printf("\nCount of Negative numbers = %d", neg);
    printf("\nCount of Zeroes = %d\n", zero);
    return 0;
 }