#include <stdio.h>

int main() {
    int qnt_arvores, altura, espessura, galhos;

    scanf("%i", &qnt_arvores);
    
    for (int i = 0; i < qnt_arvores; i++) {
        scanf("%i %i %i", &altura, &espessura, &galhos);

        if (altura >= 200 && altura <= 300 && espessura >= 50 && galhos >= 150)
            printf("Sim\n");
        else
            printf("Nao\n");
    }

    return 0;
}
