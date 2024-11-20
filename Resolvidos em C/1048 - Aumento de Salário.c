#include <stdio.h>
int main(){
double salario, novosalario, reajuste;
scanf("%lf", &salario);

if (salario>=0 && salario<=400){
    novosalario=salario+((salario*15)/100);
    reajuste=(salario*15)/100;

    printf("Novo salario: %.2lf\n", novosalario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: 15 %%\n");
}

else if(salario>400 && salario<=800){
    novosalario=salario+((salario*12)/100);
    reajuste=(salario*12)/100;

    printf("Novo salario: %.2lf\n", novosalario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: 12 %%\n");
}

else if(salario>800 && salario<=1200){
    novosalario=salario+((salario*10)/100);
    reajuste=(salario*10)/100;

    printf("Novo salario: %.2lf\n", novosalario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: 10 %%\n");
}
    
else if(salario>1200 && salario<=2000){
    novosalario=salario+((salario*7)/100);
    reajuste=(salario*7)/100;

    printf("Novo salario: %.2lf\n", novosalario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: 7 %%\n");
}

else if(salario>2000){
    novosalario=salario+((salario*4)/100);
    reajuste=(salario*4)/100;

    printf("Novo salario: %.2lf\n", novosalario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: 4 %%\n");
}

return 0;

}