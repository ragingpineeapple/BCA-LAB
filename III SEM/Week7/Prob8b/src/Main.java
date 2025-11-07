import java.util.Scanner;

public class Main
{
    public static boolean ana(String S1, String S2)
    {

        if(S1.length() != S2.length())
        {
            return false;
        }

        S1 = S1.toLowerCase();
        S2 = S2.toLowerCase();

        int c1 = 0, c2 = 0;

        for(int i = 0; i < S1.length(); i++)
        {
            c1+=(int)S1.charAt(i);
            c2+=(int)S2.charAt(i);


        }
        if(c1 == c2)
        {
            return true;
        }
        return false;

    }

    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter s: ");
        String a = scanner.nextLine();

        System.out.print("Enter s2: ");
        String b = scanner.nextLine();

        System.out.println("Anagram: " + ana(a, b));

    }
}
