#include <stdio.h>
 
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

void linha(){
    int n = 37;
    
    printf("|");
    while(n){
        printf(" ");
        n--;
    }
    printf("|\n");
}

int main() {
 
    int i = 5;
    procedimento1();
    while(i){
        linha();
        i--;
    }
    procedimento1();
 
    return 0;
}