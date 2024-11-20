package Java.b1134;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int tipo, alcool = 0, gasolina = 0, diesel = 0;
        Scanner input = new Scanner(System.in);

        do{
            tipo = input.nextInt();

            switch(tipo){
                case 1:
                alcool++;
                break;
                case 2:
                gasolina++;
                break;
                case 3:
                diesel++;
            }
        }
        while(tipo!=4);
        
        System.out.printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gasolina, diesel);
        input.close();
    }
}
