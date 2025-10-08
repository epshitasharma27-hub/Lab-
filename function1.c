//Declare a global variable outside all functions and use it inside various functions to 
//understand its accessibility.

#include <stdio.h>


int count = 10;


void displayCount();
void incrementCount();

int main() {
    printf("Initial value of count: %d\n", count);

    displayCount();      
    incrementCount();    
    displayCount();      

    return 0;
}

void displayCount() {
 
    printf("Value of count inside displayCount(): %d\n", count);
}

void incrementCount() {

    count += 5;
    printf("Value of count inside incrementCount() after adding 5: %d\n", count);
}