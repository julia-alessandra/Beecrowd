#include <stdio.h>
int main (){
    double pi, raio, volume;
    scanf("%lf", &raio);

    pi=3.14159;
    volume=(4/3.0)*pi*(raio*raio*raio);

    printf("VOLUME = %.3lf\n", volume);
    return 0;
}