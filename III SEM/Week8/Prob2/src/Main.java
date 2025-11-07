
public class Main {
    public static void main(String[] args) {
        Fruit f1 = new Fruit();
        Fruit f2 = new Fruit("red", "sweet", 10);

        //f1.setDetails("blue", "sour", 50);
        f1.Display();
        System.out.println("\n");
        f2.Display();
    }
}