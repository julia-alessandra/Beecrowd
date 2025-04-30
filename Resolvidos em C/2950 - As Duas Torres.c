#include <stdio.h>

int main()
{
    float ICM, distancia, X, Y;
    
    scanf("%f %f %f", &distancia, &X, &Y);
    
    ICM = distancia/(X+Y);
    
    printf("%.2lf\n", ICM);

    return 0;
}