#include <stdio.h>
int main (){
    int horas, vm;
    double litros;

    scanf("%d\n%d", &horas, &vm);

    litros=(horas*vm)/12.00;

    printf("%.3lf\n", litros);

    return 0;
}