// Write a Java program to convert temperature from Celsius to Fahrenheit.

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Temp in Celcius: ");
        double cel = scanner.nextDouble();

        //Formula for conversion- F = C x (9/5) + 32
        System.out.println((cel * (9.0/5.0) + 32.0) + "Fahrenheit");
    }
}

