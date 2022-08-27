#include <stdio.h>

int main() {
  int A, B, C, D, E, mandioca;
  scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
  A*=300;
  B*=1500;
  C*=600;
  D*=1000;
  E*=150;
  mandioca=A+B+C+D+E+225;
  printf("%d\n", mandioca);
      return 0;
}