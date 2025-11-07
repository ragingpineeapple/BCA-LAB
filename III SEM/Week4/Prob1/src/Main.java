import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter number: ");
        int num = scanner.nextInt();

        if(num%2!=0)
        {
            System.out.println("Odd!");
        }
        else
        {
            System.out.println("Even!");
        }
    }
}

