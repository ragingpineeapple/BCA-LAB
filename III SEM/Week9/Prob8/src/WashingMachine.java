public class WashingMachine extends Appliance
{

    WashingMachine(String brand, double power)
    {
        super(brand, power);
    }
    WashingMachine()
    {
        super();
    }

    void turnOn()
    {
        System.out.println("Washing machine turned on!");
    }
    void turnOff()
    {
        System.out.println("Washing machine turned off!");
    }

}
