package Java.b1018;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int valor;
        int resultado;
        int resto;
        int[] valores = { 50, 20, 10, 5, 2, 1 };

        Scanner input = new Scanner(System.in);

        valor = input.nextInt();

        resultado = valor / 100;
        resto = valor % 100;

        System.out.printf("%d\n%d nota(s) de R$ 100,00\n", valor, resultado);

        for (int i = 0; i < valores.length; i++) {
            resultado = resto / valores[i];
            resto %= valores[i];
            System.out.printf("%d nota(s) de R$ %d,00\n", resultado, valores[i]);
        }
        input.close();
    }
}
