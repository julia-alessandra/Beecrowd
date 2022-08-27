#include <stdio.h>
int main(){
    int nota;
    char notinha;
    scanf("%d", &nota);

    if(nota==0)
        notinha='E';
    
    else if(nota>=1 && nota<=35)
        notinha='D';

    else if(nota>=36 && nota<=60)
        notinha='C';
    else if(nota>=61 && nota<=85)
        notinha='B';
    else
        notinha='A';

    printf("%c\n", notinha);
    return 0;
}