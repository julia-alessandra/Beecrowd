package Java.b2786;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int largura, comprimento, L1, L2;

        Scanner input = new Scanner(System.in);

        largura = input.nextInt();
        comprimento = input.nextInt();

        L1 = (largura - 1) * (comprimento - 1) + (largura * comprimento);
        L2 = ((largura - 1) + (comprimento - 1)) * 2;

        System.out.printf("%d\n%d\n", L1, L2);
        input.close();
    }
}
