import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number: ");
        String num = scanner.nextLine();
        boolean pal = true;

        int l = 0, r = num.length() - 1;

        while(l<=r)
        {
            if(num.charAt(l) != num.charAt(r))
            {
                pal = false;
            }
            l++;
            r--;
        }

        if(pal)
        {
            System.out.println("Palindrome!");
        }
        else
        {
            System.out.println("Not a palindrome :(");
        }
    }
}