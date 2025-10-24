#include <stdio.h>
 
int main() {
 
    int a,b, i;
    scanf("%d %d", &a, &b);
    i = a;
    if(a<=b){
        a = b;
        b = i;
    }
    
    if(a%b == 0) printf("Sao Multiplos\n");
    else printf("Nao sao Multiplos\n");
 
    return 0;
}