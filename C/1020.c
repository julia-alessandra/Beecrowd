#include <stdio.h>
int main(){
    int dias, meses, anos, diasIdade;
    scanf("%d", &diasIdade);

    //divisão dos dias
    anos=diasIdade/365;
    meses=(diasIdade%365)/30;
    dias=(diasIdade%365)%30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}