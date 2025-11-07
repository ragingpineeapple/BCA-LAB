import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter number: ");
        int x = scanner.nextInt();

        while(x>=10)
        {
            x/=2;
        }

        System.out.println("Result: " + x);
    }
}

