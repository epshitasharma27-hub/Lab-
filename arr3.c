/*WAP to read a list of integers and store it in a single dimensional array. Write a C program to 
find the frequency of a particular number in a list of integers. */
#include <stdio.h>

int main() {
    int n, i, num, count = 0;

    // Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read number to find frequency of
    printf("Enter the number to find its frequency: ");
    scanf("%d", &num);

    // Count frequency
    for(i = 0; i < n; i++) {
        if(arr[i] == num)
            count++;
    }

    // Display result
    printf("The number %d appears %d time(s) in the list.\n", num, count);

    return 0;
}
