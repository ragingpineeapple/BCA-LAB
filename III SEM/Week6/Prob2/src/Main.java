import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number: ");
        int num = scanner.nextInt();
        boolean prime = true;

        for(int i = 2; i < num/2; i++)
        {
            if(num%i==0)
            {
                prime = false;
                break;
            }
        }

        if(prime)
        {
            System.out.println("Prime");
        }
        else
        {
            System.out.println("Not Prime");
        }
    }

}