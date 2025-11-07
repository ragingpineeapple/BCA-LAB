import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);
            System.out.print("Enter number: ");
            int n = scanner.nextInt();

            for(int i = 0; i <= n; i++)
            {
                for(int x = n - i; x > 0; x--)
                {
                    System.out.print(" ");
                }
                for(int x = 0; x<i; x++)
                {
                    System.out.print("*");
                }
                System.out.println();
            }
            for(int i = n-1; i>0; i--)
            {
                for(int x = 0; x<n-i; x++)
                {
                    System.out.print(" ");
                }
                for(int x = i; x>0 ;x--)
                {
                    System.out.print("*");
                }
                System.out.println();
            }
    }
}