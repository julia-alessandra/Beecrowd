#include <stdio.h>
int main(){
int positivo, i;
double numeros, media;

for(i=1; i<=6; i++){
    scanf("%lf", &numeros);

    if(numeros>0){
        positivo++;
        media+=numeros;
    }    
}
    media=media/positivo;
    printf("%d valores positivos\n%.1lf\n", positivo, media);
    return 0;
}