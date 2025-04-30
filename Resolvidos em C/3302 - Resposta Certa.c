#include <stdio.h>
 
int main() {
 
    int qnt, respostas[100], copia, i=1;
    
    scanf("%i", &qnt);
    
    copia = qnt;
    
    while(i<=qnt){
        scanf("%i", &respostas[i]);
        i++;
    }
    
    for(i = 1; i<=copia; i++){
        printf("resposta %i: %i\n", i, respostas[i]);
    }
 
    return 0;
}