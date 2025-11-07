import java.util.Scanner;

public class Main
{
    public static int fibo(int s)
    {
        if(s<=1)
        {
            return s;
        }
        return fibo(s-1) + fibo(s-2);

    }

    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number: ");
        int a = scanner.nextInt();

        System.out.println("Fibo: " + fibo(a));

    }
}
