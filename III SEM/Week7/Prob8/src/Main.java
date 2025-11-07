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

        for(int i = 0; i < S1.length(); i++)
        {
            char c = S1.charAt(i);
            int c1 = 0, c2 = 0;

            for(int j = 0; j < S1.length(); j++)
            {
                if(S1.charAt(j) == c)
                {
                    c1++;
                }
                if(S2.charAt(j) == c)
                {
                    c2++;
                }
            }
            if(c1 != c2)
            {
                return false;
            }
            c1 = 0;
            c2 = 0;
        }
        return true;

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
