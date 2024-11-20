#include <stdio.h>

int main(){

    int l, c, L1, L2;
    scanf("%d %d", &l, &c);
    
    //1=lajota tipo3(vai nos cantos)
    L1  = (l-1)*(c-1)+(l*c);
    L2 = ((l-1)+(c-1))*2;

    printf("%d\n", L1);
    printf("%d\n", L2);

  return 0;

}