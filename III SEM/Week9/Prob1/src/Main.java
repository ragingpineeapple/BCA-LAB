public class Main{
    public static void main(String[] args) {
        Bus b1 = new Bus(100);

        Train t1 = new Train(400);

        System.out.println("Bus: " + b1.cost());
        System.out.println("Train: " + t1.cost());
        b1.Display();
        t1.Display();


    }


}