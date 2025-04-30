#include <stdio.h>

int main() {
    int n, energia;

    scanf("%d", &n);

    while (n--) {
        scanf("%i", &energia);

        if (energia > 8000)
            printf("Mais de 8000!\n");
        else
            printf("Inseto!\n");
    }

    return 0;
}
