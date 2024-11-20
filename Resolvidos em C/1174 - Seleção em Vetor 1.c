#include <stdio.h>
 
int main() {
 
    double numeros[100];
    
    for(int i=0; i<100; i++){
            scanf("%lf", &numeros[i]);
        if(numeros[i] <= 10)
            printf("A[%d] = %.1f\n", i, numeros[i]);
    }

    return 0;
}