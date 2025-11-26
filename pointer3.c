/*Write a function that accepts pointers as parameters. Pass variables by reference using 
pointers and modify their values within the function.*/
#include <stdio.h>

void changeValues(int *x, int *y) {
    *x = *x + 10;   // increase value of x
    *y = *y + 20;   // increase value of y
}

int main() {
    int a = 5, b = 10;

    printf("Before function: a = %d, b = %d\n", a, b);

    changeValues(&a, &b);   // pass addresses of a and b

    printf("After function: a = %d, b = %d\n", a, b);

    return 0;
}
