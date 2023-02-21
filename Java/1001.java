public import java.util.Scanner;
        
public class Main {
    public static void main(String[] args){
        int a;
        int b;
        Scanner input = new Scanner(System.in);

        a = input.nextInt();
        b = input.nextInt();
        
        int x = a + b;
        
        System.out.println("X = " + x);
    }
}
