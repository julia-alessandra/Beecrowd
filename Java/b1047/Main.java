package Java.b1047;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int HoraInicial, MinutoInicial, HoraFinal, MinutoFinal, Tmax, Ttotal, DH, DM;

        Scanner input = new Scanner(System.in);

        HoraInicial = input.nextInt();
        MinutoInicial = input.nextInt();
        HoraFinal = input.nextInt();
        MinutoFinal = input.nextInt();

        Tmax = 24 * 60;
        Ttotal = (HoraFinal * 60 + MinutoFinal) - (HoraInicial * 60 + MinutoInicial);
        Ttotal = Ttotal - 1;
        Ttotal = (Ttotal + Tmax) % Tmax;
        Ttotal = Ttotal + 1;
        DH = Ttotal / 60;
        DM = Ttotal % 60;

        System.out.printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", DH, DM);
        input.close();
    }
}
