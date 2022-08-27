#include <stdio.h>
int main()
{
    int x, y;
    char O;
    double M[12][12], resultado;

    scanf("%c", &O);
    for (x = 0; x < 12; x++)
        for (y = 0; y < 12; y++)
            scanf("%lf", &M[x][y]);

    for (x = 0; x < 12; x++)
        for (y = x + 1; y < 12; y++)
            resultado += M[x][y];

    if (O = 'M')
        resultado /= 66.0;

    printf("%.1lf\n", resultado);

    return 0;
}