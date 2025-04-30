#include <stdio.h>
int main()
{
    char letra, posicao;
    
    scanf("%c", &letra);
    posicao = letra - 64;
    printf("%i\n", posicao);

    return 0;
}