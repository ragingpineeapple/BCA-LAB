public class Fruit {
    private String color, taste;
    private int price;

    Fruit(String color, String taste, int price)
    {
        this.color = color;
        this.taste = taste;
        this.price = price;
    }
    Fruit()
    {
        this("null", "null", 0);
    }
    Fruit(String color)
    {
        this(color, "null", 0);
    }
    Fruit(String color, String taste)
    {
        this(color, taste, 0);
    }




    void setDetails(String color, String taste, int price)
    {
        this.color = color;
        this.taste = taste;
        this.price = price;
    }

    void Display()
    {
        System.out.printf("Colour: %s\nTaste: %s\nPrice: %d", color, taste, price);
    }
}
