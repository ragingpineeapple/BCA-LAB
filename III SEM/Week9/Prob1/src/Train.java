public class Train extends Vehicle{
    Train(int fare)
    {
        super(fare);
    }
    Train()
    {
        this(0);
    }
    void Display()
    {
        System.out.println("Train fare: " + fare);
    }
}
