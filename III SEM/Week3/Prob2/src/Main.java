import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number1: ");
        float num1 = scanner.nextFloat();

        System.out.print("Enter number2: ");
        float num2 = scanner.nextFloat();

        System.out.println("Product: " + (num1 * num2));

    }
}


