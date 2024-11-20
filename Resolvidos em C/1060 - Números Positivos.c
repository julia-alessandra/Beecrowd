#include <stdio.h>
int main (){
float a, b, c, d, e, f;
int positivo;
    scanf("%f\n%f\n%f\n%f\n%f\n%f", &a, &b, &c, &d, &e, &f);

    positivo=(a>0)+(b>0)+(c>0)+(d>0)+(e>0)+(f>0);

    printf("%d valores positivos\n", positivo);
    return 0;
}