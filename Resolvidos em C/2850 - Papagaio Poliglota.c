#include <stdio.h>
#include <string.h>

int main() {
    char perna[25];

    while (scanf("%s", perna) != EOF) {
        if (strcmp(perna, "esquerda") == 0)
            printf("ingles\n");
        else if (strcmp(perna, "direita") == 0)
            printf("frances\n");
        else if (strcmp(perna, "nenhuma") == 0)
            printf("portugues\n");
        else if (strcmp(perna, "as") == 0) {
            scanf("%s", perna);
            printf("caiu\n");
        }
    }

    return 0;
}
