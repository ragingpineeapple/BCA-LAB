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

        if(x==0)
        {
            return y;
        }

        return gcd(y%x, x);


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
