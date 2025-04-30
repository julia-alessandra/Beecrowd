#include <stdio.h>

int main() {
    int n, k;
    int tomadas[100];
    int resultado = 0;

    scanf("%i", &n);

    while (n--) {
        
        scanf("%i", &k);
        int total = 0; 

        for (int i = 0; i < k; i++) {
            scanf("%i", &tomadas[i]);
            total += tomadas[i];
        }

        resultado = total - (k - 1);

        printf("%i\n", resultado);
    }

    return 0;
}