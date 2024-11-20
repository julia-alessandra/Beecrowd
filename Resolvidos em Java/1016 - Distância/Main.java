package Java.b1016;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int distancia, tempo;
		
		Scanner input = new Scanner(System.in);
		
		distancia = input.nextInt();
		tempo = (60*distancia)/30;
		
		System.out.printf("%d minutos\n", tempo);
        input.close();
    }
}
