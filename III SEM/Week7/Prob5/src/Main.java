import java.util.Scanner;

public class Main
{
    public static int fac(int s)
    {
        if(s == 0)
        {
            return 1;
        }
        return s * fac(s-1);

    }

    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number: ");
        int a = scanner.nextInt();

        System.out.println("Factorial: " + fac(a));

    }
}
