#include <stdio.h>

int main(){

    int distancia, tempo;

    scanf("%d", &distancia);

    tempo = (60*distancia)/30;

    printf("%d minutos\n", tempo);

    return 0;
}