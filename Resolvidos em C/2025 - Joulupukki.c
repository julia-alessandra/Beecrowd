#include <stdio.h>
#include <string.h>
int main(){
    int N, cN, j;
    char frase[1001];

    scanf("%d", &N);
  cN = N;
    N++;

    while(N--){

        fgets(frase, 1001, stdin);

        j=strlen(frase);

        while(j--){
            if(j!=0){
                if(frase[j] == 'o' && frase[j+1] == 'u' && frase[j+2] == 'l'){
                    frase[j-1] = 'J';
                    frase[j+8] = 'i';
                }
            }
        }
        if (N != cN)printf("%s", frase);  
    }
    
    return 0;
}