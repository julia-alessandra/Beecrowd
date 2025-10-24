#include <stdio.h>
 
int main() {
 
    int tomadas[3], total = 0;
    for(int i=0; i<=3;i++){
        scanf("%i", &tomadas[i]);
        total += tomadas[i];
    }
    total = total-3;
    printf("%i\n", total);
 
    return 0;
}
