/*.Perform pointer arithmetic (increment and decrement) on pointers of different data types. 
Observe how the memory addresses change and the effects on data access. */
#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    printf("Original address: %p\n", p);

    p++;   // increment pointer
    printf("After increment: %p\n", p);

    p--;   // decrement pointer
    printf("After decrement: %p\n", p);

    return 0;
}
