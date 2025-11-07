import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter limit: ");

        int lim = scanner.nextInt();
        int n = lim/10;
        int arr[] = new int[n];

        for(int i = 0, x = 10; i < n; i++, x+=10)
        {
            arr[i] = x;
        }

        System.out.println("Array elements: ");
        for(int i = 0; i<n;i++)
        {
            System.out.print(arr[i] + ",");
        }

    }
}

