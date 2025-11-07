import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter num: ");
        int mult = scanner.nextInt();

        for(int i = 1; i <= 10; i++)
        {
            System.out.println(mult + "x" + i + ": " + mult*i);
        }
    }
}

