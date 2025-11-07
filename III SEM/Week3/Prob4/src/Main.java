import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number1: ");
        int num1 = scanner.nextInt();

        System.out.print("Enter number2: ");
        int num2 = scanner.nextInt();

        System.out.print("Enter number3: ");
        int num3 = scanner.nextInt();

        System.out.print("Average: " + ((num1 + num2 + num3)/3));

    }
}

