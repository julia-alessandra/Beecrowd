#include <stdio.h>
int main(){
    int n, l, dois=0, tres=0, quatro=0, cinco=0;

    scanf("%d\n", &n);
    
    for(int i=1; i<=n; i++){ 

    scanf("%d", &l);

    if(l%2==0)
        dois++;
    if(l%3==0)
        tres++;
    if(l%4==0)
        quatro++;
    if(l%5==0)
        cinco++;
    }
    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n", dois, tres, quatro, cinco);
}