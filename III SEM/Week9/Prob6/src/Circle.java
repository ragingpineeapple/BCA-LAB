public class Circle extends Shape{
    double radius;

    Circle(double radius)
    {
        this.radius = radius;
    }
    Circle()
    {
        this(0);
    }

    double area()
    {
        return (2 * Math.PI * radius);
    }
}
