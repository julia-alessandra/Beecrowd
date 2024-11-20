#include <stdio.h>
int main(){
    int horaSaida, tempoViagem, fuso, resultado;
    scanf("%d %d %d", &horaSaida, &tempoViagem, &fuso);
    if(horaSaida==0)
        resultado=24+tempoViagem+fuso;
    else
        resultado=horaSaida+tempoViagem+fuso;
    
    if(resultado>=24){
        resultado-=24;
    }
    printf("%d\n", resultado);
    return 0;
}