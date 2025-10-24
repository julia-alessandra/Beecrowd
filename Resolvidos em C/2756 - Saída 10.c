#include <stdio.h>

void branco(int qnt){
    for(int i=0; i<qnt; i++){
        printf(" ");
    }    
}

void letra(char letra, int qnt){
    printf("%c", letra);
    for(int i=0; i<qnt; i++){
        printf(" ");
    }
    printf("%c\n", letra);
}

int main() {
    branco(7);
    printf("A\n");
    branco(6);
    letra('B', 1);
    branco(5);
    letra('C', 3);
    branco(4);
    letra('D', 5);
    branco(3);
    letra('E', 7);
    branco(4);
    letra('D', 5);
    branco(5);
    letra('C', 3);
    branco(6);
    letra('B', 1);
    branco(7);
    printf("A\n");

    return 0;
}
