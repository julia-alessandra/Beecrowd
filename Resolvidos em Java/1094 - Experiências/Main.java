package Java.b1094;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int quantidade, quantos, total = 0, i;
        char tipo;
        float c, s, r, coelho = 0, rato = 0, sapo = 0;

        Scanner input = new Scanner(System.in);

        quantidade = input.nextInt();

        for (i = quantidade; i > 0; i--) {
            quantos = input.nextInt();
            tipo = input.next().charAt(0);

            total += quantos;

            switch (tipo) {
                case 'C':
                    coelho += quantos;
                    break;
                case 'S':
                    sapo += quantos;
                    break;
                default:
                    rato += quantos;
            }
        }
        s = (sapo * 100) / total;
        c = (coelho * 100) / total;
        r = (rato * 100) / total;

        System.out.printf(
                "Total: %d cobaias\nTotal de coelhos: %.0f\nTotal de ratos: %.0f\nTotal de sapos: %.0f\nPercentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n",
                total, coelho, rato, sapo, c, r, s);
        input.close();
    }
}
