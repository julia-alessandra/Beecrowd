import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        String nome;
        double salario, vendas, total;
 
        Scanner input = new Scanner(System.in);

        nome = input.nextLine();
        salario = input.nextDouble();
        vendas = input.nextDouble();
        
        total = (vendas*0.15)+salario;
        
        System.out.printf("TOTAL = R$ %.2f\n", total);
    }
 
}
