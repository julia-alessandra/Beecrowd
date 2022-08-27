#include <stdio.h>
int main()
{
    int x, y;
    char tipo;
    double vetor[12][12], resultado;

    scanf("%c", &tipo);
    for (x = 0; x < 12; x++)
        for (y = 0; y < 12; y++)
            scanf("%lf", &vetor[x][y]);
            

    for (x=0; x <= 11; x++)
        for (y=0; y<11-x; y++)
            resultado += vetor[x][y];

    if (tipo == 'M')
        resultado /= 66.0;

    printf("%.1lf\n", resultado);

    return 0;
}