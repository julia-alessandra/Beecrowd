import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
    int A, B, C, D, resultado;
    Scanner input = new Scanner(System.in);

    A = input.nextInt();
    B = input.nextInt();
    C = input.nextInt();
    D = input.nextInt();
    
    resultado = A*B-C*D;
    System.out.printf ("DIFERENCA = %d\n", resultado);
 
    }
 
}