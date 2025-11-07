import java.util.Scanner;

public class Main
{
    public static int gcd(int x, int y)
    {
        if(x > y)
        {
            x = x+y;
            y = x-y;
            x = x-y;
        }

        while(x > 0)
        {
            int temp = y%x;
            y = x;
            x = temp;
        }

        return y;


    }

    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number: ");
        int a = scanner.nextInt();

        System.out.print("Enter 2nd number: ");
        int b = scanner.nextInt();

        System.out.println("GCD: " + gcd(a, b));

    }
}
