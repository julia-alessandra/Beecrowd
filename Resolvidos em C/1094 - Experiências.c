#include <stdio.h>
int main(){
    int N, quantia, cobaias=0;
    char tipo;
    float r, s, c, rato=0, coelho=0, sapo=0;
  scanf("%d", &N);

  while(N--) {

    scanf("%d %c", &quantia, &tipo);

    cobaias+=quantia;

    //ver qual cobaia é e calcular a quantidade de cada.
    if(tipo=='C'){
      coelho+=quantia;
    }
    else if(tipo=='S'){
      sapo+=quantia;
    }
    else if(tipo=='R'){
      rato+=quantia;
    }
  }
  //porcentagem de cada
  c=(coelho*100)/cobaias;
  s=(sapo*100)/cobaias;
  r=(rato*100)/cobaias;
  
  printf("Total: %d cobaias\n", cobaias);
  printf("Total de coelhos: %.0f\n", coelho);
  printf("Total de ratos: %.0f\n", rato);
  printf("Total de sapos: %.0f\n", sapo);
  printf("Percentual de coelhos: %.2f %%\n", c);
  printf("Percentual de ratos: %.2f %%\n", r);
  printf("Percentual de sapos: %.2f %%\n", s);

  return 0;
}