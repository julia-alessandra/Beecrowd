#include <stdio.h>
int main(){
    int HoraInicial, MinutoInicial, HoraFinal, MinutoFinal, Tmax, Ttotal, DH, DM;
    scanf("%d %d %d %d", &HoraInicial, &MinutoInicial, &HoraFinal, &MinutoFinal);
    Tmax=24*60;
    Ttotal=(HoraFinal*60+MinutoFinal)-(HoraInicial*60+MinutoInicial);
    Ttotal= Ttotal-1;
    Ttotal=(Ttotal+Tmax)%Tmax;
    Ttotal=Ttotal+1;
    DH=Ttotal/60;
    DM=Ttotal%60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", DH, DM);
    return 0;
}


//Com if e else

int main(){
    int ijh, ijm, fjh, fjm, comeco, hora, minuto;
    scanf("%d", &ijh);
    scanf("%d", &ijm);
    scanf("%d", &fjh);
    scanf("%d", &fjm);

    if (fjh*60+fjm>ijh*60+ijm){
        comeco =(fjh*60+fjm)-(ijh*60+ijm);
    }

    else{
        comeco = ((fjh+24)*60+fjm)-(ijh*60+ijm);
    }

    hora = comeco/60;
    minuto=comeco%60;

    if(hora==0 && minuto==0){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);
    }

    return 0;

}
