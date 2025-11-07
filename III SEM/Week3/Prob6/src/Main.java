//Write a Java program to swap two numbers using a temporary variable.
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number 1: ");
        int num1 = scanner.nextInt();

        System.out.print("Enter number 2: ");
        int num2 = scanner.nextInt();

        System.out.println("Before swapping: ");
        System.out.println(num1 + ", " + num2);

        //Swapping
        int temp = num1;
        num1 = num2;
        num2 = temp;

        System.out.println("After swapping: ");
        System.out.println(num1 + ", " + num2);

    }
}

