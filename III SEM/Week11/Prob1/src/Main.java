public class Main {
    static void main() {
        Saving s = new Saving();
        s.deposit();
        s.withdraw();
        s.takeLoan();

        Current c = new Current();
        c.deposit();
        c.withdraw();
    }
}
