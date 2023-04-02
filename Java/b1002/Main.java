package Java.b1002;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        double a;
        Scanner input = new Scanner(System.in);
        
        a = input.nextDouble();
        
        double x;
        x = (a * a)*3.14159;
   
        System.out.printf("A=%.4f\n", x);
        input.close();
    }
}
