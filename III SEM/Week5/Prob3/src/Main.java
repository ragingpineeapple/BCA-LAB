import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter number of elements: ");

        int n = scanner.nextInt();
        int z = 0;

        for(int i = 1; i <= n; i++)
        {
            z = (z * 10) + i;
            for(int x = n-i-1; x >= 0; x--)
            {
                System.out.print(" ");
            }
            System.out.println(z);
        }
    }
}

