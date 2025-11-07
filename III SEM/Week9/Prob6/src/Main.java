public class Main
{
    public static void main(String[] args) {
        Circle c = new Circle(2);

        Rectangle r = new Rectangle(3, 4);

        System.out.printf("Area of circle: %.2f\n", c.area());
        System.out.println( "Area of rectangle: " + r.area());
    }
}