import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter num1: ");
        int num1 = scanner.nextInt();

        System.out.println("Enter num2: ");
        int num2 = scanner.nextInt();

        System.out.println("Enter num3: ");
        int num3 = scanner.nextInt();

        System.out.println("Enter num4: ");
        int num4 = scanner.nextInt();

        int smol = num1;

        if(num1 > num2)
        {
            smol = num2;
        }
        else if (num1>num3)
        {
            smol = num3;
        }
        else if(num1 > num4)
        {
            smol = num4;
        }

        System.out.println("Smallest: " + smol);
    }
}