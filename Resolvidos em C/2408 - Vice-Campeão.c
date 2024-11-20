#include <stdio.h>
int main(){
int A, B, C, resultado;
  scanf("%d %d %d", &A, &B, &C);

  if(A>B && A>C){
    if(B>C)
      resultado=B;
    else if(C>B)
      resultado=C;
  }
  else if(B>A && B>C){
    if(A>C)
      resultado=A;
    else if(C>A)
      resultado=C;
  }
  else if(C>A && C>B){
    if(A>B)
      resultado=A;
    else if(B>A)
      resultado=B;
  }
  printf("%d\n", resultado);
  return 0;
}