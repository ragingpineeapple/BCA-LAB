public class Main
{
    public static void main(String[] args) {
        Department d1 = new Department("CS", "ARF", "SF", "AMU", 1);

        d1.Display();

        System.out.println("Uni rank: " + d1.ranking);
    }
}