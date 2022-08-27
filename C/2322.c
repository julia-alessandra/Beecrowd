#include <stdio.h>
int main() {

    int N, i, PA=0, valores, soma=0;
    scanf("%d", &N);
    
    for (i = 1; i <= N; i++) {
        PA += i;
    }

    for(int j=N-1; j>0; j--){
        scanf("%d", &valores);
        soma+=valores;
    }
    printf("%d\n", PA-soma);
    return 0;
}