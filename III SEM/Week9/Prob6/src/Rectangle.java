public class Rectangle extends Shape{
    double length;
    double breadth;

    Rectangle(double length, double breadth)
    {
        this.length = length;
        this.breadth = breadth;
    }
    Rectangle()
    {
        this(0, 0);
    }

    double area()
    {
        return (length*breadth);
    }
}
