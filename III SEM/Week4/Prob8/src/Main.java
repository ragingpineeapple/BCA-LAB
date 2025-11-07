
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter number: ");
        int num = scanner.nextInt(), sum = 0;

        for(int i = 2; i <= num; i+=2)
        {
            sum += i;
        }

        System.out.println("Sum: " + sum);
    }
}

