#include <stdio.h>
 
int main () {

    int VALOR, NOTA100, NOTA50, NOTA20, NOTA10, NOTA5, NOTA2, NOTA1, RESTO;
    scanf ("%d", &VALOR);

    NOTA100 = VALOR / 100;
    RESTO = VALOR % 100;

    NOTA50 = RESTO / 50;
    RESTO = RESTO % 50;

    NOTA20 = RESTO / 20;
    RESTO = RESTO % 20;

    NOTA10 = RESTO / 10;
    RESTO = RESTO % 10;

    NOTA5 = RESTO / 5;
    RESTO = RESTO % 5;

    NOTA2 = RESTO / 2;
    RESTO = RESTO%2;

    NOTA1 = RESTO;

    printf ("%d\n", VALOR);
    printf ("%d nota(s) de R$ 100,00\n", NOTA100);
    printf ("%d nota(s) de R$ 50,00\n", NOTA50);
    printf ("%d nota(s) de R$ 20,00\n", NOTA20);
    printf ("%d nota(s) de R$ 10,00\n", NOTA10);
    printf ("%d nota(s) de R$ 5,00\n", NOTA5);
    printf ("%d nota(s) de R$ 2,00\n", NOTA2);
    printf ("%d nota(s) de R$ 1,00\n", NOTA1);

    return 0;
}