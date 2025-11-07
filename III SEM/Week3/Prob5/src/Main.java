import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter x coordinate 1: ");
        double x1 = scanner.nextDouble();

        System.out.print("Enter x coordinate 2: ");
        double x2 = scanner.nextDouble();

        System.out.print("Enter y coordinate 1: ");
        double y1 = scanner.nextDouble();

        System.out.print("Enter y coordinate 2: ");
        double y2 = scanner.nextDouble();

        double d = Math.sqrt(Math.pow((x2 - x1), 2) + Math.pow((y2 - y1), 2));

        System.out.println("Distance: " + d);

    }
}

