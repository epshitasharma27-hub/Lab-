#include<stdio.h>
/*1.Declare different types of pointers (int, float, char) and initialize them with the addresses of 
variables. Print the values of both the pointers and the variables they point to.*/
#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'X';

    int *p1 = &a;      // pointer to int
    float *p2 = &b;    // pointer to float
    char *p3 = &c;     // pointer to char

    printf("Value of a = %d\n", a);
    printf("Pointer p1 stores address = %p\n", p1);
    printf("Value pointed by p1 = %d\n\n", *p1);

    printf("Value of b = %f\n", b);
    printf("Pointer p2 stores address = %p\n", p2);
    printf("Value pointed by p2 = %.2f\n\n", *p2);

    printf("Value of c = %c\n", c);
    printf("Pointer p3 stores address = %p\n", p3);
    printf("Value pointed by p3 = %c\n", *p3);

    return 0;
}
