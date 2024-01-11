package Java.b1038;

import java.util.Scanner;

class Resultado {
    double[] lanche = { 0.0, 4.00, 4.50, 5.00, 2.00, 1.50 };

    double calcula(int codigo, int quantidade) {
        return lanche[codigo] * quantidade;
    }
}

public class Main {
    public static void main(String[] args) {
        int quantidade, codigo;
        Scanner input = new Scanner(System.in);
        codigo = input.nextInt();
        quantidade = input.nextInt();

        Resultado lanche = new Resultado();
        System.out.printf("Total: R$ %.2f\n", lanche.calcula(codigo, quantidade));
        input.close();
    }
}
