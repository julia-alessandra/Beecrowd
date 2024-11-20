package Java.b1008;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int numero;
        int horas;
        double sal_horas;

        Scanner input = new Scanner(System.in);

        numero = input.nextInt();
        horas = input.nextInt();
        sal_horas = input.nextDouble();

        System.out.printf("NUMBER = %d\nSALARY = U$ %.2f\n", numero, horas * sal_horas);
        input.close();
    }
}
