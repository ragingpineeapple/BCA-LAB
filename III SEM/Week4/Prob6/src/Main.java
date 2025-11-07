import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter char: ");
        char x = scanner.next().toLowerCase().charAt(0);

        if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
        {
            System.out.println("Vowel");
        }
        else
        {
            System.out.println("Consonant!");
        }
    }
}

