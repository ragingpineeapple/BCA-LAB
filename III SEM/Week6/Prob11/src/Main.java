import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner scanner = new Scanner(System.in);


        System.out.println("Enter string: ");
         String string = scanner.nextLine();
        int c = 0, len = string.length();
        char[][] alpha = {{'a', ' ' },{'b', ' ' },{'c', ' ' },{'d', ' ' },{'e', ' ' },{'f', ' ' },{'g', ' ' },{'h', ' ' },
                {'i', ' ' },{'j', ' ' },{'k', ' ' },{'l', ' ' },{'m', ' ' },{'n', ' ' },{'o', ' ' },{'p', ' ' },{'q', ' ' },
                {'r', ' ' },{'s', ' ' },{'t', ' ' },{'u', ' ' },{'v', ' ' },{'w', ' ' },{'x', ' ' },{'y', ' ' },{'z', ' ' }};


        for(int i = 0; i < 26; i++)
        {
            for(int x = 0; x < len; x++)
            {
                if(string.toLowerCase().charAt(x) == alpha[i][0])
                {
                    c++;
                }
            }
            alpha[i][1] = Character.forDigit(c, 10);
            c = 0;
        }

        for(int i = 0; i < 26; i++)
        {
            System.out.println(alpha[i][0] + " ="  + alpha[i][1] );
        }
    }
}