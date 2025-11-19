/*Develop a recursive function FIBO (num) that accepts an integer argument. Write a C program 
that invokes this function to generate the Fibonacci sequence up to num.  
Develop a C function ISPRIME (num) that accepts an integer argument and returns 1 if the 
argument is prime, a 0 otherwise. Write a C program that invokes this function to generate prime 
numbers between the given ranges.  */
#include <stdio.h>

// Recursive Fibonacci function
int FIBO(int num) {
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return FIBO(num - 1) + FIBO(num - 2);
}

int main() {
    int n, i;

    printf("Enter how many Fibonacci numbers you want: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d terms:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", FIBO(i));
    }

    return 0;
}
