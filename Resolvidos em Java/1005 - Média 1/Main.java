package Java.b1005;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        double a;
        double b;
        Scanner input = new Scanner(System.in);

        a = input.nextDouble();
        b = input.nextDouble();

        double x;
        x = ((a * 3.5) + (b * 7.5)) / 11;

        System.out.printf("MEDIA = %.5f\n", x);
        input.close();
    }
}
