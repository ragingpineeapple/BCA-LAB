//Write a Java program that takes two integer inputs and computes their
//remainder and quotient.

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter num1: ");
        int x = scanner.nextInt();

        System.out.print("Enter num2: ");
        int y = scanner.nextInt();

        System.out.println("Remainder: " + (x%y) + " Quotient: " + (x/y));
    }
}

