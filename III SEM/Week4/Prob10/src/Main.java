import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter number: ");
        int num = scanner.nextInt();
        System.out.println("Factors: ");
        for(int i = 1; i<=num/2;i++)
        {
            if(num%i==0)
            {
                System.out.println(i);
            }
        }
        System.out.println(num);
    }
}

