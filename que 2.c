#include <stdio.h>
int main() {
    float w,h;
    printf("Enter Weight and Height of the person:");
    scanf("%f %f", &w, &h);
    float bmi = w/(h*h);
    printf("BMI is %f \n", bmi);
    if (bmi < 15) {
        printf("Person is suffering with Starvation \n");
    }
    else if (bmi >= 15 && bmi < 17.5) {
        printf("Person is suffering from Anorexic \n");
    }
    else if (bmi >= 17.5 && bmi <= 18.5) {
        printf("Person is Underweight \n");
    }
    else if (bmi>=18.5 && bmi<=24.9)
        printf("Person is Ideal \n");
    else if (bmi>=25 && bmi<=29.9)
        printf("Person is Overweight \n");
    else if (bmi>=30 && bmi<=40)
        printf("Person is Obese \n");
    else if (bmi>40)
        printf("Person is Morbidly Obese \n");  
}