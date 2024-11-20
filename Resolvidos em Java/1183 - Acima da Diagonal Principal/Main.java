package Java.b1183;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int x, y, i, j;
        char O;
        double[][] M = new double[12][12];
        double total = 0;
        Scanner input = new Scanner(System.in);

        O = input.next().charAt(0);
        for (x = 0; x < 12; x++) {
            for (y = 0; y < 12; y++) {
                M[x][y] = input.nextDouble();
            }
        }
        for (i = 0; i < 12; i++) {
            for (j = i + 1; j < 12; j++) {
                total += M[i][j];
            }
        }
        if (O == 'M') {
            total /= 66.0;
        }
        System.out.printf("%.1f\n", total);
        input.close();
    }
}
