#include <stdio.h>
int main()
{
    int L, g, j;
    char T;
    double M[12][12], resultado = 0;

    scanf("%d %c", &L, &T);

    for (int j= 0; j < 12; j++)

        for (int g = 0; g < 12; g++)
            scanf("%lf", &M[j][g]);

    for (j = 0; j < 12; j++)
        resultado += M[L][j];

    if (T == 'M')
        resultado /= 12;

    printf("%.1f\n", resultado);
    return 0;
}