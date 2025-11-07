// Write a Java program to calculate the area of a rectangle given its length
//and breadth.

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter breath: ");
        int br = scanner.nextInt();

        System.out.print("Enter length: ");
        int len = scanner.nextInt();

        System.out.println("Area: " + (br * len));
    }
}

