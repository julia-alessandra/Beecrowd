#include <stdio.h>

int main() {

    int a, b, c, d, e, par, impar, neg, pos;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    par=(a%2==0)+(b%2==0)+(c%2==0)+(d%2==0)+(e%2==0);
    impar=5-par;
    
    pos=(a>0)+(b>0)+(c>0)+(d>0)+(e>0);
    neg=(a<0)+(b<0)+(c<0)+(d<0)+(e<0);


    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, pos, neg);
    return 0;
}