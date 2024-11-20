#include <stdio.h>
 
int main() {
    int pretendecorrer, comprimentopista, resultado;
    scanf("%d %d", &pretendecorrer, &comprimentopista);
    
    resultado=pretendecorrer%comprimentopista;
    
    printf("%d\n", resultado);
    
    return 0;
}