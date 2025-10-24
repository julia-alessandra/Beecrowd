#include <stdio.h>

int main() {
    int frango, bife, massa, Pfrango, Pbife, Pmassa, pessoas = 0;
    
    scanf("%i %i %i %i %i %i", &frango, &bife, &massa, &Pfrango, &Pbife, &Pmassa);
    
    if(frango<Pfrango) pessoas += Pfrango - frango;
    if(bife<Pbife) pessoas += Pbife - bife;
    if(massa<Pmassa) pessoas+= Pmassa - massa;
    
    printf("%i\n", pessoas);
    
    return 0;
}
