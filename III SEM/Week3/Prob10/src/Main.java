//Write a Java program to find the circumference of a circle given its radius.

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter radius: ");
        double r = scanner.nextDouble();

        //Math.PI = value of Pi
        System.out.println("Circumference: " + (2.0 * Math.PI * r));
    }
}

