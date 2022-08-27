int main(){

    char NOME[20];
    double SALARIO, VENDAS, TOTAL2;

    scanf("%s", NOME);
    scanf("%lf", &SALARIO);
    scanf("%lf", &VENDAS);

    TOTAL2 = (VENDAS*0.15)+SALARIO;

    printf("TOTAL = R$ %.2lf\n", TOTAL2);
  return 0;

}