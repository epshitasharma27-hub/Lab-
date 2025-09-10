//Q.3 WAP using ternary operator, the user should input the length and breadth of a rectangle, one has to find out which rectangle has the highest perimeter. The minimum number of rectangles should be three.
#include <stdio.h>
int main(){
    int l1,b1,l2,b2,l3,b3;
    printf("Enter length and breadth of first rectangle:");
    scanf("%d%d",&l1,&b1);
    printf("Enter length and breadth of second rectangle:");
    scanf("%d%d",&l2,&b2);
    printf("Enter length and breadth of third rectangle:");
    scanf("%d%d",&l3,&b3);
    int p1=2*(l1+b1);
    int p2=2*(l2+b2);
    int p3=2*(l3+b3);
    int max=(p1>p2)?((p1>p3)?p1:p3):((p2>p3)?p2:p3);
    printf("The highest perimeter is %d",max);
    return 0;
}