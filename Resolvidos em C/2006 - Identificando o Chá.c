#include <stdio.h>
 
int main() {
 
    int cha, respostas[5], certos = 0;
    
    scanf("%i", &cha);
    for(int i=0 ; i<5 ; i++){
        scanf("%i", &respostas[i]);
        if(respostas[i] == cha) certos++;
    }
    printf("%i\n", certos);
 
    return 0;
}