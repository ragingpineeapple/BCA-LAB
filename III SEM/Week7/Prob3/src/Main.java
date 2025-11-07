import java.util.Scanner;

public class Main
{
    public static String rev(String s)
    {
        String ne = "";
        int len = s.length();
        for(int i = 0; i < len; i++)
        {
            ne = ne + s.charAt(len - i - 1);
        }
        return ne;

    }

    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter string: ");
        String str = scanner.nextLine();

        System.out.println("String: " + str);

        System.out.println("Reversed: " + rev(str));
    }
}
