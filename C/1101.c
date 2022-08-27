#include <stdio.h>
int main(){
    int m, n, i, sum=0, nada=0,j=3;
    
    while (j>0 && j<=3){
        scanf("%d %d\n", &m, &n);
        j-=1;
    
    if(m==0 || n==0)
        break;

    if(m>n){
        nada=m;
        m=n;
        n=nada;
    }
        
    for(i=m; i<=n; i++){
        sum+=i;
        printf("%d ", i);
    }
    printf("Sum=%d\n", sum);
    
    sum=0;
}

    return 0;
}