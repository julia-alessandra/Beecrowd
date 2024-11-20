package Java.b1985;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int quantidade, produto, quantos, i;
        double total = 0;
        
        Scanner input = new Scanner(System.in);
        quantidade = input.nextInt();

        for(i=quantidade; i>0; i--){
            produto = input.nextInt();
            quantos = input.nextInt();

            switch(produto){
                case 1001:
                total+=1.50*quantos;
                break;
                case 1002:
                total+=2.50*quantos;
                break;
                case 1003:
                total+=3.50*quantos;
                break;
                case 1004:
                total+=4.50*quantos;
                break;
                default:
                total+=5.50*quantos;
            }
        }
        System.out.printf("%.2f\n", total);
        input.close();
    }
}
