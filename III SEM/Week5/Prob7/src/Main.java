import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number of elements: ");

        int n = scanner.nextInt();
        int arr[] = new int[n];

        for(int i = 0; i < n; i++)
        {
            System.out.print("Enter element number " + i + ":");
            arr[i] = scanner.nextInt();
        }

        int larg = arr[0];

        for(int i = 1; i < n; i++)
        {
            if(arr[i] > larg)
            {
                larg = arr[i];
            }
        }

        System.out.println("Largest: " + larg);
    }
}