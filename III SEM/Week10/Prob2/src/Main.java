public class Main
{
    static void main(String[] args) {
        Edible e = new Edible();

        Edible.Fruit f = new Edible.Fruit();
        Edible.Vegetable v = new Edible.Vegetable();

        f.fruitPackaging();
        Edible.Fruit.fruitDetails();

        v.vegetablePackaging();
        Edible.Vegetable.vegetableDetails();
    }
}