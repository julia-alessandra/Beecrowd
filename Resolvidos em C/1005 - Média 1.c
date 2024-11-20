#include <stdio.h>

int main(){

    double A, B, NOTA;
    scanf ("%lf %lf", &A, &B);

    NOTA = ((A*3.5)+(B*7.5))/11;

    printf("MEDIA = %.5f\n", NOTA);

  return 0;

}