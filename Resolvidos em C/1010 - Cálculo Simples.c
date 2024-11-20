#include <stdio.h>

int main(){

    int cod1, cod2, item1, item2;
    double preco1, preco2, total;

    scanf("%d %d %lf", &cod1, &item1, &preco1);
    scanf("%d %d %lf", &cod2, &item2, &preco2);

    total = (preco1*item1)+(preco2*item2);

    printf("VALOR A PAGAR: R$ %.2lf\n", total);
  return 0;

}