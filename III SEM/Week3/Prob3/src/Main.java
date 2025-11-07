import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number1: ");
        float num1 = scanner.nextFloat();

        System.out.println("Cube: " + Math.pow(num1, 3));

    }
}

