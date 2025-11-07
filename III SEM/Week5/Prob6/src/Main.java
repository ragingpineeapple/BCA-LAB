import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter number: ");
        int facnum = scanner.nextInt();
        int fac = 1;

        for(int i = 1; i<=facnum;i++)
        {
            fac*=i;
        }

        System.out.println("Factorial: " + fac);
    }
}
