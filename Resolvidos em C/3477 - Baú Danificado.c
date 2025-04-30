#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, z;
    double raio, semicirculo, triangulo, area;
    
    scanf("%i %i %i", &x, &y, &z);
    
    if(pow(x, 2)!=pow(y, 2) + pow(z, 2)){
        printf("Nao eh retangulo!\n");
    }else{
        raio = z/2.0;
        
        semicirculo = (3 * pow(raio, 2))/2.0;
        
        triangulo = (z * y)/2.0;
        
        area = semicirculo + triangulo;
        
        printf("AREA = %.0lf\n", area);
    }

    return 0;
}