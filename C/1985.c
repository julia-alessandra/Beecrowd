#include <stdio.h>
int main(){
    int quantidade, produto, comprou;
    double valor=0;

    scanf("%d\n", &quantidade);

    while(quantidade--){
        scanf("%d %d", &produto, &comprou);

    switch (produto){
        case 1001:
            valor+=1.50*comprou;
        break;
        case 1002:
            valor+=2.50*comprou;
        break;
        case 1003:
            valor+=3.50*comprou;
        break;
        case 1004:
            valor+=4.50*comprou;
        break;
        case 1005:
            valor+=5.50*comprou;
        }
    }
    printf("%.2lf\n", valor);

    return 0;
}