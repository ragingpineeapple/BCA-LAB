import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number to be reversed: ");
        int num = scanner.nextInt();
        int rev = 0;

        for(int i = 0; num != 0; i++)
        {
            rev = (rev*10) + num%10;
            num /= 10;
        }

        System.out.println(rev);


    }
}

