#include <stdio.h>
int main(){
    int LINHA, COLUNA, COR;
    scanf("%d %d", &LINHA, &COLUNA);
    COR=(LINHA+COLUNA+1)%2;
    printf("%d\n", COR);
    return 0;
}