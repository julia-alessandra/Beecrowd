#include <stdio.h>
#include <string.h>

int main() {
    double x, y;
    char quadrante[10];
    scanf("%lf %lf", &x, &y);

    if (x == 0 && y == 0)
         strcpy(quadrante, "Origem");
    else if (x == 0)
         strcpy(quadrante, "Eixo Y");
    else if (y == 0)
         strcpy(quadrante, "Eixo X");
    else if (x > 0 && y > 0)
         strcpy(quadrante, "Q1");
    else if (x > 0 && y < 0)
         strcpy(quadrante, "Q4");
    else if (x < 0 && y > 0)
         strcpy(quadrante, "Q2");
    else
         strcpy(quadrante, "Q3");

    printf("%s\n", quadrante);
    return 0;
}
