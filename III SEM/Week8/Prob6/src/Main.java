public class Main
{
    static void main(String[] args) {
        CAR c = new CAR();

        c.setDetails("Stradale", "Silver", 420);
        String[] b = c.getDetails();

        for(String x:b)
        {
            System.out.println(x);
        }
        
        c.display();
    }
}