#include <stdio.h>
int main(){
    float a, b,c;
    printf("Enter sides of the triangle:");
    scanf("%f %f %f", &a, &b,&c);
    if (a+b>c && b+c>a && c+a>b)
            printf("Triangle is valid \n");
    else
            printf("Triangle is not valid \n");
    if (a==b && b==c)
            printf("Equilateral triangle \n");
    else if (a==b || b==c || c==a)
            printf("Isosceles triangle \n");
else if((a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==a*a+b*b))
            printf("Right-angled triangle \n");
    else
         printf("Scalene triangle \n");
return 0;
}