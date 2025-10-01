/*3(a). Pattern Printing
 1
 2 3
 4 5 6 */
 #include <stdio.h>
 int main() {
    int i, j, num = 1;
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
 }

 /* 3(b). Pattern Printing 2 (Pascal’s Triangle)
    1
   1 1
  1 2 1
 1 3 3 1
 1 4 6 4 1*/

  #include <stdio.h>
  int fact(int n) {
    int f = 1, i;
    for (i = 1; i <= n; i++)
        f *= i;
    return f;
 }
 int main() {
    int n = 5, i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++)
            printf(" ");
        for (j = 0; j <= i; j++) {
            printf("%d ", fact(i) / (fact(j) * fact(i - j)));
        }
        printf("\n");
    }
    return 0;
 }