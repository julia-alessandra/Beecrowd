#include <stdio.h>
int main(){
    double nota1, nota2, nota3, nota4, media, exame, mediafinal;

    scanf("%lf %lf %lf %lf", &nota1, &nota2, &nota3, &nota4);

    media=((nota1*2)+(nota2*3)+(nota3*4)+(nota4*1))/10;

    if(media>=7)
        printf("Media: %.1f\nAluno aprovado.\n", media);
    else if(media<5)
        printf("Media: %.1f\nAluno reprovado.\n", media);
    else {
        printf("Media: %.1f\nAluno em exame.\n", media);
        scanf("%lf", &exame);
        mediafinal=(media + exame)/2;
        printf("Nota do exame: %.1f\n", exame);
        if(mediafinal>=5)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        
        printf("Media final: %.1f\n", mediafinal);
    }
    return 0;
}