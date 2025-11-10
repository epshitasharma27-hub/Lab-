/* WAP to read a list of integers and store it in a single dimensional array. Write a C program to 
print the second largest integer in a list of integers.*/
#include <stdio.h>

int main() {
    int n, i;
    
    // Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read elements
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize first and second largest
    int first, second;
    first = second = -999999;  // You can also use INT_MIN from <limits.h>

    for(i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if(second == -999999)
        printf("There is no second largest element.\n");
    else
        printf("The second largest element is: %d\n", second);

    return 0;
}
