import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a limit: ");

        int n = scanner.nextInt();
        int felm = 0;
        int selm = 1;

        System.out.print("0 1 ");
        for (int i = 0; i <= n; i++) {
            System.out.print(felm + selm + " ");
            felm = selm;
            selm = felm + selm;
        }
    }
}
