#include <stdio.h>
 
int main() {
 
    int inicio, fim, tempo;
    scanf("%i %i", &inicio, &fim);
    
    if(inicio == fim) tempo=24;
    else if(fim>inicio){
        tempo = fim - inicio;
    }
    else{
        inicio = 24 - inicio;
        tempo = inicio+fim;
    }
    
    printf("O JOGO DUROU %i HORA(S)\n", tempo);
 
    return 0;
}