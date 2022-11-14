#include <stdio.h>
#include <string.h>
int main(){
    int i=0, j=0, tamanho;
    char risada[51], risada2[51];
    scanf("%s", risada);

    for(i; i<strlen(risada); i++){
        if(risada[i]=='a' || risada[i]=='e' || risada[i]=='i' || risada[i]=='o' || risada[i]=='u'){
            risada2[j] = risada[i];
            j++;
        }
    }
    risada2[j] = '\0';
    tamanho= strlen(risada2);
    for(i=0, j=tamanho-1; i < tamanho; i++, j--){
        if(risada2[i] != risada2[j]){
            printf("N\n");
            return 0;
        }
    }
    printf("S\n");
    return 0;
}