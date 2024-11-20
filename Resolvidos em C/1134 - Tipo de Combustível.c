#include <stdio.h>
int main(){
    int tipo, alcool=0, gasolina=0, diesel=0;

  do{
    scanf("%d", &tipo);
    //conferir qual combustivel é o numero colocado
      
    switch (tipo){
    case 1:
        alcool++;
        break;
    case 2:
        gasolina++;
        break;
    case 3:
        diesel++;
    }
    //enquanto o numero colocado for diferente de 4, vai repetir
    } while (tipo!=4);
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gasolina, diesel);
    return 0;
}