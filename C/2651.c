#include <stdio.h>
#include <string.h>
int main(){
    char nome[1000010];
    int link, aux;

    scanf("%s", nome);

    for (int i = 0; i < strlen(nome); i++){
    aux = nome[i];
    if (aux >= 65 && aux <= 90){
      aux += 32;
      nome[i] = aux;
    }
  }
    
    link = strstr(nome, "zelda");
    

     if(link == NULL){
          printf("Link Tranquilo\n");
      }
      else
        printf("Link Bolado\n");
    
    return 0;
}
