public class Vehicle {
    int fare;

    Vehicle(int fare)
    {
        this.fare = fare;
    }
    Vehicle()
    {
        this(0);
    }
    int cost()
    {
        return fare;
    }


}
