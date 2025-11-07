public class Main {
    public static void main(String[] args) {
        Account a1 = new Account("A32", "BOB");

        a1.deposit(200);
        a1.Display();

        System.out.println("SI: " + a1.calculateSimpleInterest(5000, 5, 2));


    }
}