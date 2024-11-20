#include <stdio.h>
int main(){
    int M, filho1, A, B, maisvelho;
    scanf("%d %d %d", &M, &A, &B);
//calcular a idade do terceiro filho
  filho1=M-(A+B);
//ver qual é o mais velho
  if(filho1>=A && filho1>=B)
    maisvelho=filho1;
  else if(A>filho1 && A>B)
    maisvelho=A;
  else
    maisvelho=B;
  printf("%d\n", maisvelho);
    return 0;
}