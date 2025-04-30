#include <stdio.h>
 
int main() {
 
    int H, E, A, O, W, X, bem, mal;
    
    scanf("%i %i %i %i %i %i", &H, &E, &A, &O, &W, &X);
    
    bem = H + E + A;
    mal = O + W;
    
    if(bem<=mal){
        bem +=X;
    }
    
    if(bem > mal){
        printf("Middle-earth is safe.\n");
    }else {
        printf("Sauron has returned.\n");
    }
 
    return 0;
}