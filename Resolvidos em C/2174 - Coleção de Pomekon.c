#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
 
    int n, pokebola = 0, igual;
    char pokemons[1001][50];

    scanf("%d", &n);

    for (int i=0; i<n; i++) 
        scanf(" %s", pokemons[i]); 

    for (int g=0; g<n; g++){
        igual = 0;
        for (int j =0; j<g; j++){
            if (strcmp(pokemons[g], pokemons[j]) == 0){
                igual = 1;
                break;
            }    
        }
        if (igual == 0){
            pokebola++;
        }
    }
  printf("Falta(m) %d pomekon(s).\n", 151 - pokebola);

  return 0;
}