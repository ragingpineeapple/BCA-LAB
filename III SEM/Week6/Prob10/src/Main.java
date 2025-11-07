import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter len: ");
        int x, num = scanner.nextInt();

        int[] arrr = new int[num];

        for(int i = 0; i < num; i++)
        {
            System.out.print("Enter number" + i + ": ");
            arrr[i] = scanner.nextInt();
        }

        for(int i = 0; i < num/2; i++)
        {
            x = arrr[i];
            arrr[i] = arrr[num-i-1];
            arrr[num-i-1] = x;
        }

        for(int i = 0; i < num; i++)
        {
            System.out.println(arrr[i]);
        }

    }
}