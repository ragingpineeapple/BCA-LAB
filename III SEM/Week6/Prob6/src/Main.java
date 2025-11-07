import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter size of array: ");
        int n = scanner.nextInt();

        int arr[] = new int[n];

        for(int i=0;i<n;i++)
        {
            System.out.printf("Enter element" + i + ": ");
            arr[i] = scanner.nextInt();
        }

        System.out.print("Enter the element you want to search: ");
        int x = scanner.nextInt();

        for(int i=0;i<n;i++){

            if(arr[i]==x){
                System.out.printf("Element found at index: " + i);
            }

        }
    }
}
