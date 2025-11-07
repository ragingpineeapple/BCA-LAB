public class Main
{
    public static void main(String[] args) {
        WashingMachine w1 = new WashingMachine("IFP", 100);
        w1.turnOn();
        w1.turnOff();

        Refrigerator r1 = new Refrigerator("Samsung", 1000);
        r1.turnOn();
        r1.turnOff();
    }
}