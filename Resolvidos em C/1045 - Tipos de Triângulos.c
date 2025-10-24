#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, Ra, Rb, Rc;

    scanf("%lf %lf %lf", &a, &b, &c);
    if (a < b) { double t = a; a = b; b = t; }
    if (a < c) { double t = a; a = c; c = t; }
    if (b < c) { double t = b; b = c; c = t; }

    Ra = pow(a, 2);
    Rb = pow(b, 2);
    Rc = pow(c, 2);

    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (fabs(Ra - (Rb + Rc)) < 1e-9)
            printf("TRIANGULO RETANGULO\n");
        else if (Ra > Rb + Rc)
            printf("TRIANGULO OBTUSANGULO\n");
        else
            printf("TRIANGULO ACUTANGULO\n");

        if (a == b && b == c)
            printf("TRIANGULO EQUILATERO\n");
        else if (a == b || a == c || b == c)
            printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}