#include <stdio.h>
 
int main() {
 
    char t;
    int n, gasto = 0, verba = 0, valor;
    
    scanf("%i", &n);
    
    while(n){
        scanf(" %c %i", &t, &valor);
        
        if(t == 'G'){
            gasto +=valor;
        }else{
            verba+=valor;
        }
        n--;
    }
    
    if(verba>=gasto){
        printf("A greve vai parar.\n");
    }else{
        printf("NAO VAI TER CORTE, VAI TER LUTA!\n");
    }
 
    return 0;
}