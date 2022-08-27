#include <stdio.h>
int main(){
    int a, b, soma=0;
    scanf("%d\n%d", &a, &b);

    if(a>b){
        soma=a;
        a=b;
        b=soma;
    }
    soma=0;
    for(int i=a+1; i<b; i++){
        if(i%2!=0){
            soma+=i;
        }
    }
    printf("%d\n", soma);
}