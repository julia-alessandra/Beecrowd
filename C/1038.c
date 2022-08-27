#include <stdio.h>
 
int main() {
        int codigo, quantidade;
    scanf("%d %d", &codigo, &quantidade);

    if (codigo==1)
       printf("Total: R$ %.2lf\n", quantidade*4.00);

    else if (codigo==2)
        printf("Total: R$ %.2lf\n", quantidade*4.50);

    else if (codigo==3)
        printf("Total: R$ %.2lf\n", quantidade*5.00);

    else if (codigo==4)
        printf("Total: R$ %.2lf\n", quantidade*2.00);

    else if (codigo==5)
        printf("Total: R$ %.2lf\n", quantidade*1.50);
    return 0;
}

//Com vetor

#include <stdio.h>
int main(){
    double lanche[]={0.00, 4.00, 4.50, 5.00, 2.00, 1.50};
    int quantidade, codigo;
    scanf("%d %d", &codigo, &quantidade);
    printf("Total: R$ %.2lf\n", lanche[codigo]*quantidade);
    return 0;
}