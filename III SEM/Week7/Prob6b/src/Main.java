import java.util.Scanner;

public class Main {
    public static int fibo(int s) {
        int n1 = 0;
        int n2 = 1;
        for (int i = 0; i < s; i++) {
            int temp = n2;
            System.out.println(n1);
            n2 = n1 + n2;
            n1 = temp;
        }

        return n1;

    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number: ");
        int a = scanner.nextInt();

        System.out.println("Fibo: " + fibo(a));

    }
}
