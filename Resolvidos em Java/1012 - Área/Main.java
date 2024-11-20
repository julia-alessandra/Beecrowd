package Java.b1012;

import java.util.Scanner;

class Figura{
    double lado;
    double altura;
    double raio;


    double getLado(){
        return lado;
    }
    void setLado(double lado){
        this.lado = lado;
    }
    double getAltura(){
        return altura;
    }
    void setRaio(double raio){
        this.raio = raio;
    }
    double getRaio(){
        return raio;
    }
    void setAltura(double altura){
        this.altura = altura;
    }
}


class Triangulo extends Figura{
    Triangulo(double lado, double altura){
        this.setLado(lado);
        this.altura = altura;
    }
    double area(){
        return (lado*altura)/2;
    }
}

class Circulo extends Figura{

    private double pi = 3.14159;
    Circulo(double raio){
        this.setRaio(raio);
    }
    double area(){
        return ((raio*raio)*pi);
    }
}

class Trapezio extends Figura{
    private double baseG;
    private double baseP;

    public void setBaseG(double baseG) {
        this.baseG = baseG;
    }
    public double getBaseG() {
        return baseG;
    }
    public void setBaseP(double baseP) {
        this.baseP = baseP;
    }
    public double getBaseP() {
        return baseP;
    }

    Trapezio(double baseG, double baseP, double altura){
        this.setBaseG(baseG);
        this.setBaseP(baseP);
        this.setAltura(altura);
    }

    double area(){
        return ((baseG+baseP)*getAltura())/2;
    }
}

class Quadrado extends Figura{
    Quadrado(double lado){
        this.setLado(lado);
    }

    double area(){
        return lado*lado;
    }
}

class Retangulo extends Figura{
    Retangulo(double lado, double altura){
        this.setLado(lado);
        this.setAltura(altura);
    }

    double area(){
        return lado*altura;
    }
}

public class Main{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double a, b, c;
        a = input.nextDouble();
        b = input.nextDouble();
        c = input.nextDouble();

        Triangulo triangulo = new Triangulo(a, c);
        Circulo circulo = new Circulo(c);
        Trapezio trapezio = new Trapezio(a, b, c);
        Quadrado quadrado= new Quadrado(b);
        Retangulo retangulo = new Retangulo(a, b);

        System.out.printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", triangulo.area(), circulo.area(), trapezio.area(), quadrado.area(), retangulo.area());
        input.close();
    }
}
