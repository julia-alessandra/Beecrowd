#include <string.h>
#include <stdio.h>
 
int main() {
    int qnt_pessoas, qnt_horas, bonecos = 0, arquitetos = 0, musicos = 0, desenhistas = 0, total_grupos;
    char nomes[1000][1000], grupo[100];
    
    scanf("%i", &qnt_pessoas);
    
    for(int i = 0; i < qnt_pessoas; i++){
        
        scanf("%s %s %i", nomes[i], grupo, &qnt_horas);
        if(strcmp(grupo, "bonecos") == 0){
            bonecos += qnt_horas;
        } else if(strcmp(grupo, "arquitetos") == 0){
            arquitetos += qnt_horas;
        } else if(strcmp(grupo, "musicos") == 0){
            musicos += qnt_horas;
        } else if(strcmp(grupo, "desenhistas") == 0){
            desenhistas += qnt_horas;
        }
        
        qnt_horas = 0;
    }

    bonecos = bonecos / 8;
    arquitetos = arquitetos / 4;
    musicos = musicos / 6;
    desenhistas = desenhistas / 12;
    total_grupos = bonecos + arquitetos + musicos + desenhistas;
    
    printf("%i\n", total_grupos);
 
    return 0;
}
