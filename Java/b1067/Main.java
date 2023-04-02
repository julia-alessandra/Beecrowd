package Java.b1067;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int n, i;
        Scanner input = new Scanner(System.in);

        n = input.nextInt();

        for (i = 1; i <= n; i = i + 2) {
            System.out.printf("%d\n", i);
        }

        input.close();
    }
}
