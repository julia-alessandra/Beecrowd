#include <stdio.h>
#include <string.h>
 
int main() {
    char palavra[50];
    int tamanho;
    
    scanf("%s", palavra);
    
    tamanho = strlen(palavra);
    
    if(tamanho>=10){
        printf("palavrao\n");
    }else{
        printf("palavrinha\n");
    }
 
    return 0;
}