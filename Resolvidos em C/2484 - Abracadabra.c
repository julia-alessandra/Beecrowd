#include <stdio.h>
#include <string.h>
int main (){
  
	char palavra[1010];
	int tam, j, aux;

	while(scanf("%s", palavra) != EOF){
    
		tam = strlen(palavra);
		aux = strlen(palavra);

		for (int i = 0; i < tam; i++){
		    for(int g = 0; g < i; g++){
                printf(" ");
	        }
      
			for (j = 0; j < aux-1; j++){
				printf("%c ", palavra[j]);
            }
      
			printf("%c\n", palavra[j]);
			aux--;
		}
	printf("\n");
	}
  return 0;
}