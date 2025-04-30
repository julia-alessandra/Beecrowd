#include <stdio.h>

int main() {
    int N, X;
    float dias;

    scanf("%d %d", &N, &X);

    dias = (float)X / (N + 2);

    printf("%.2f\n", dias);

    return 0;
}