public class CAR {
    String model;
    String color;
    int price;

    void setModel(String model)
    {
        this.model = model;
    }
    void setColor(String color)
    {
        this.color = color;
    }
    void setPrice(int price)
    {
        this.price = price;
    }

    String getModel()
    {
        return model;
    }

    String getColor()
    {
        return color;
    }

    int getPrice()
    {
        return price;
    }


    void setDetails(String model, String color, int price)
    {
        setModel(model);
        setColor(color);
        setPrice(price);
    }

    String[] getDetails()
    {
        String[] s = {model, color, Integer.toString(price)};
        return s;
    }

    void display()
    {
        System.out.println("Model: " + model);
        System.out.println("Color: " + color);
        System.out.println("Price: " + price);
    }

}
