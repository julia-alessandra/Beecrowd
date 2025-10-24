#include <stdio.h>
#include <string.h>

int main() {
    int qnt;
    char palavra[10000];

    scanf("%d", &qnt);
    
    for (int i = 0; i < qnt; i++) {
        scanf("%s", palavra);
        double tempo = strlen(palavra) * 0.01;
        printf("%.2lf\n", tempo);
    }

    return 0;
}
