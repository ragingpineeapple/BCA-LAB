abstract public class Appliance {
    String brand;
    double power;

    Appliance(String brand, double power)
    {
        this.brand = brand;
        this.power = power;
    }
    Appliance()
    {
        this("NULL", 0);
    }

    abstract void turnOn();

    abstract void turnOff();
}
