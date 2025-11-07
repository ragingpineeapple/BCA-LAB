import java.util.Scanner;

public class Main
{
    public static int part(int arr[], int l, int h)
    {
        int p = arr[l], i = l, j = h, t;

        while(i<j)
        {
            while(arr[i]<=p && i<h)
            {
                i++;
            }
            while(arr[j]>p && j>=l)
            {
                j--;
            }

            if(i<j)
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }

        t = arr[l];
        arr[l] = arr[j];
        arr[j] = t;
        return j;
    }

    public static void qs(int arr[], int l, int h)
    {
        if(l<h)
        {
            int p = part(arr, l, h);

            qs(arr, l, p-1);
            qs(arr, p+1, h);
        }
    }

    public static void main(String[] args)
    {
        int[] arr = {10, 7, 8, 9, 1, 5, 5, 2};
        int n = arr.length;

        qs(arr, 0, n-1);

        for(int x:arr)
        {
            System.out.print(x + ", ");
        }
    }
}
