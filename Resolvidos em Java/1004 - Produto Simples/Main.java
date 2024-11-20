package Java.b1004;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int a;
        int b;
        Scanner input = new Scanner(System.in);

        a = input.nextInt();
        b = input.nextInt();

        int x;
        x = a * b;

        System.out.printf("PROD = %d\n", x);
        input.close();
    }
}
