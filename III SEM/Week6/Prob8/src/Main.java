import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter size of array: ");
        int n = scanner.nextInt();

        int arr[] = new int[n];
        for(int i=0;i<n;i++)
        {
            System.out.printf("Enter element" + i + ": ");
            arr[i] = scanner.nextInt();
        }

        int largest = arr[0];

        for(int i=0;i<n;i++)
        {

            if(arr[i]>largest)
            {
                largest = arr[i];
            }
        }
        int slargest = arr[0];

        for(int i=0;i<n;i++)
        {
            if(arr[i]>slargest && arr[i] != largest)
            {
                slargest = arr[i];
            }

        }
        System.out.printf("Second largest element:" + slargest);
    }
}

