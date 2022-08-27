#include <stdio.h>
int main(){
    int N, A, B, distancia=0, total=0;
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d %d", &A, &B);
        distancia=A*B;
        total+=distancia;
    }
    printf("%d\n", total);
}