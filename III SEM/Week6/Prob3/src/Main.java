import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter size of the array: ");
        int n = scanner.nextInt();
        int arr[] = new int[n];

        for(int i=0;i<n;i++){
            System.out.print("Enter element"+ i + ": ");
            arr[i] = scanner.nextInt();
        }

        int temp = arr[0];
        arr[0] = arr[n-1];
        arr[n-1] = temp;

        System.out.println("New array is: ");
        for(int i=0;i<n;i++){
            System.out.println(arr[i] + " ");
        }
    }
}
