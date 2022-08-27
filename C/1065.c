#include <stdio.h>
 
int main() {

    int a, b, c, d, e, par;
    scanf("%d\n%d\n%d\n%d\n%d\n", &a, &b, &c, &d, &e);
    
    par=(a%2==0)+(b%2==0)+(c%2==0)+(d%2==0)+(e%2==0);
    
    printf("%d valores pares\n", par);
    return 0;
}