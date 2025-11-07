import java.sql.SQLOutput;
import java.util.Scanner;

public class Main
{

    public static void sort(int[] arrr)
    {
        int len = arrr.length;
        for(int i = 0; i < len; i++)
        {
            for(int j = 0; j<len-1-i; j++)
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

    public static int binsearch(int[] arr, int f)
    {
        sort(arr);
        System.out.println("Sorted array: ");

        for(int a:arr)
        {
            System.out.print(a+ ", ");
        }
        System.out.println();

        int min = 0;
        int max = arr.length;

        while(min<max)
        {
            int mid = (min+max)/2;
            if(arr[mid] == f)
            {
                return mid+1;
            }
            else if(arr[mid] > f)
            {
                max = mid;
            }
            else
            {
                min = mid+1;
            }
        }


        return -69;

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

        System.out.print("Enter element to find: ");
        int elem = scanner.nextInt();

        int r = binsearch(arr, elem);

        if(r != -69)
        {
            System.out.println("Element found at index: " + r);
        }
        else
        {
            System.out.println("Element not found!");
        }

    }
}
