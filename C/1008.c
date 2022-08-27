#include <stdio.h>
 
int main () {

    int A, B;
    double C;

    scanf ("%d", &A);
    scanf ("%d", &B);
    scanf ("%lf", &C);

    printf ("NUMBER = %d\n", A);
    printf ("SALARY = U$ %.2lf\n", B * C);

    return 0;

}