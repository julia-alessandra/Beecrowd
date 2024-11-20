package Java.b1014;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int X;
        double Y;

        Scanner input = new Scanner(System.in);

        X = input.nextInt();
        Y = input.nextDouble();

        System.out.printf("%.3f km/l\n", X / Y);
        input.close();
    }
}
