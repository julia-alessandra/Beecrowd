#include <stdio.h>
int main()
{
    int x, y;
    char O;
    double M[12][12], resultado,i=11.0;

    scanf("%c", &O);
    for (x = 0; x < 12; x++)
        for (y = 0; y < 12; y++)
            scanf("%lf", &M[x][y]);

    for (x = 1; x <= 11; x++, i--)
        for (y = i; y <= 11; y++)
            resultado += M[x][y];

    if (O = 'M')
        resultado /= 66.0;

    printf("%.1lf\n", resultado);

    return 0;
}