#include <stdio.h>

int main() {
    double valor;
    int notas, moedas, centavos;

    scanf("%lf", &valor);
    centavos = (int)(valor * 100 + 0.5);

    printf("NOTAS:\n");
    notas = centavos / 10000;
    printf("%d nota(s) de R$ 100.00\n", notas);
    centavos %= 10000;

    notas = centavos / 5000;
    printf("%d nota(s) de R$ 50.00\n", notas);
    centavos %= 5000;

    notas = centavos / 2000;
    printf("%d nota(s) de R$ 20.00\n", notas);
    centavos %= 2000;

    notas = centavos / 1000;
    printf("%d nota(s) de R$ 10.00\n", notas);
    centavos %= 1000;

    notas = centavos / 500;
    printf("%d nota(s) de R$ 5.00\n", notas);
    centavos %= 500;

    notas = centavos / 200;
    printf("%d nota(s) de R$ 2.00\n", notas);
    centavos %= 200;

    printf("MOEDAS:\n");
    moedas = centavos / 100;
    printf("%d moeda(s) de R$ 1.00\n", moedas);
    centavos %= 100;

    moedas = centavos / 50;
    printf("%d moeda(s) de R$ 0.50\n", moedas);
    centavos %= 50;

    moedas = centavos / 25;
    printf("%d moeda(s) de R$ 0.25\n", moedas);
    centavos %= 25;

    moedas = centavos / 10;
    printf("%d moeda(s) de R$ 0.10\n", moedas);
    centavos %= 10;

    moedas = centavos / 5;
    printf("%d moeda(s) de R$ 0.05\n", moedas);
    centavos %= 5;

    moedas = centavos / 1;
    printf("%d moeda(s) de R$ 0.01\n", moedas);

    return 0;
}
