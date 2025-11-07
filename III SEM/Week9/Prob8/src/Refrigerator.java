public class Refrigerator extends Appliance
{

    Refrigerator(String brand, double power)
    {
        super(brand, power);
    }
    Refrigerator()
    {
        super();
    }

    void turnOn()
    {
        System.out.println("Refrigerator turned on!");
    }
    void turnOff()
    {
        System.out.println("Refrigerator turned off!");
    }

}
