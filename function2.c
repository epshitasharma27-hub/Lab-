// Declare a local variable inside a function and try to access it outside the function. Compare 
//this with accessing the global variable from within the function. 


#include <stdio.h>

int globalVar = 10; 

void display() {
    int localVar = 5; 
    printf("Inside function:\n");
    printf("Local variable = %d\n", localVar);
    printf("Global variable = %d\n", globalVar);
}

int main() {
    display();

   
    printf("Global variable outside function = %d\n", globalVar); 

    return 0;
}