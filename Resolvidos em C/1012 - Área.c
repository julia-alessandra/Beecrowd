#include <stdio.h>
 
int main() {
 
    double A, B, C, triangulo, circulo, trapezio, quadrado, retangulo;
    scanf("%lf %lf %lf", &A, &B, &C);
    
    //area das figuras
    triangulo = (A*C)/2;
    circulo= (C*C)*3.14159;
    trapezio=((A+B)*C)/2;
    quadrado=B*B;
    retangulo=A*B;
    
    printf("TRIANGULO: %.3f\n", triangulo);
    printf("CIRCULO: %.3f\n", circulo);
    printf("TRAPEZIO: %.3f\n", trapezio);
    printf("QUADRADO: %.3f\n", quadrado);
    printf("RETANGULO: %.3f\n", retangulo);
    
    return 0;
}