public class Bus extends Vehicle{
    Bus(int fare)
    {
        super(fare);
    }
    Bus()
    {
        this(0);
    }
    void Display()
    {
        System.out.println("Bus fare: " + fare);
    }

}
