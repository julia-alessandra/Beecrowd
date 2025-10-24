import java.io.IOException;
import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) throws IOException {
 
    int cod1, cod2, item1, item2;
    double preco1, preco2, total;
    
    Scanner input = new Scanner(System.in);

    cod1 = input.nextInt();
    item1 = input.nextInt();
    preco1  = input.nextDouble();
    
    cod2 = input.nextInt();
    item2  = input.nextInt();
    preco2  = input.nextDouble();
    
    total = (preco1*item1)+(preco2*item2);

    System.out.printf("VALOR A PAGAR: R$ %.2f\n", total);

    }
 
}
