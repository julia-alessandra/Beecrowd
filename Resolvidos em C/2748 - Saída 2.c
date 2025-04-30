#include <stdio.h>
#include <string.h>
 
void procedimento1(){
        int n = 39;
    
    while(n){
        printf("-");
        if(n==1){
            printf("\n");
        }
        n--;
    }
}


void linhaVazia(){
    int n = 37;
    
    printf("|");
    while(n){
        printf(" ");
        n--;
    }
    printf("|\n");
}


void linhaTexto(char *texto){
    int n = 29 - strlen(texto);
    int x = 8;
    
    printf("|");
    while(x){
        printf(" ");
        x--;
    }
    printf("%s", texto);
    while(n){
        printf(" ");
        n--;
    }
    printf("|\n");
}


int main() {
 
    procedimento1();
    linhaTexto("Roberto");
    linhaVazia();
    linhaTexto("5786");
    linhaVazia();
    linhaTexto("UNIFEI");
    procedimento1();
 
    return 0;
}