import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter size of array: ");

        int n = scanner.nextInt();
        int arr[] = new int[n];

        for(int i=0;i<n;i++){
            System.out.printf("Enter element" + i + ": ");
            arr[i] = scanner.nextInt();
        }

        int largest = arr[n-1];
        int smallest = arr[0];

        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                largest = arr[i];
            }
            if(arr[i]<smallest){
                smallest = arr[i];
            }
        }

        System.out.printf("Largest: " + largest + "Smallest: " + smallest);
    }
}
