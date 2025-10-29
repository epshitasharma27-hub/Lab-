#include <stdio.h>
#define PI 3.14159  // Define value of pi

// Function declarations
float areaCircle(float radius);
float areaRectangle(float length, float width);
float areaTriangle(float base, float height);

int main() {
    int choice;
    float radius, length, width, base, height;

    printf("Choose the shape to calculate area:\n");
    printf("1. Circle\n2. Rectangle\n3. Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            printf("Area of the circle: %.2f\n", areaCircle(radius));
            break;
        case 2:
            printf("Enter the length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            printf("Area of the rectangle: %.2f\n", areaRectangle(length, width));
            break;
        case 3:
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            printf("Area of the triangle: %.2f\n", areaTriangle(base, height));
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

// Function definitions
float areaCircle(float radius) {
    return PI * radius * radius;
}

float areaRectangle(float length, float width) {
    return length * width;
}

float areaTriangle(float base, float height) {
    return 0.5 * base * height;
}
