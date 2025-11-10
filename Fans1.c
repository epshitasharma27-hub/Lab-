/*Develop a recursive and non-recursive function FACT(num) to find the factorial of a number, n!, 
defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n) = n * FACT(n-1). Using this function, write 
a C program to compute the binomial coefficient. Tabulate the results for different values of n 
and r with suitable messages.*/
#include <stdio.h>

// Recursive factorial function
long fact_recursive(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact_recursive(n - 1);
}

// Non-recursive (iterative) factorial function
long fact_nonrecursive(int n) {
    long fact = 1;
    for (int i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}

int main() {
    int n, r;
    long ncr_rec, ncr_nonrec;

    // Read n and r
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);

    // Check valid input
    if (r > n || n < 0 || r < 0) {
        printf("Invalid input! (r should be <= n and both >= 0)\n");
        return 0;
    }

    // Using recursive factorial
    ncr_rec = fact_recursive(n) / (fact_recursive(r) * fact_recursive(n - r));

    // Using non-recursive factorial
    ncr_nonrec = fact_nonrecursive(n) / (fact_nonrecursive(r) * fact_nonrecursive(n - r));

    // Display results
    printf("\nUsing Recursive Function: C(%d, %d) = %ld", n, r, ncr_rec);
    printf("\nUsing Non-Recursive Function: C(%d, %d) = %ld\n", n, r, ncr_nonrec);

    // Table of nCr for same n
    printf("\nBinomial Coefficients for n = %d:\n", n);
    for (int i = 0; i <= n; i++) {
        long val = fact_nonrecursive(n) / (fact_nonrecursive(i) * fact_nonrecursive(n - i));
        printf("C(%d, %d) = %ld\n", n, i, val);
    }

    return 0;
}
