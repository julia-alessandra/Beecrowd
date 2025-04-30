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


void linhaTexto(int antes){
    char *texto = "x = 35";
    int n = 37 - antes - strlen(texto);
    if (n < 0) n = 0;
    
    printf("|");
    while(antes){
        printf(" ");
        antes--;
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
    linhaTexto(0);
    linhaVazia();
    linhaTexto(15);
    linhaVazia();
    linhaTexto(31);
    procedimento1();
 
    return 0;
}