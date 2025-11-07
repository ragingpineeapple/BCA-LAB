import java.sql.SQLOutput;
import java.util.Scanner;

public class Main
{

    public static void sort(int[] arrr)
    {
        int len = arrr.length;
        for(int i = 0; i < len; i++)
        {
            for(int j = 0; j<len-1-j; j++)
            {
                if(arrr[j] > arrr[j+1])
                {
                    arrr[j] = arrr[j] + arrr[j+1];
                    arrr[j+1]= arrr[j] - arrr[j+1];
                    arrr[j] = arrr[j] - arrr[j+1];
                }
            }
        }
    }

    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of elements: ");
        int x = scanner.nextInt();
        int[] arr = new int[x];

        for(int i = 0; i<x; i++)
        {
            System.out.print("Enter element " + i + " : ");
            arr[i] = scanner.nextInt();
        }

        sort(arr);
        System.out.println("Sorted array: ");
        for(int a:arr)
        {
            System.out.print(a+ ", ");
        }
        System.out.println();
    }
}
