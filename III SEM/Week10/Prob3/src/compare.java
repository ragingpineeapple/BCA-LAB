public class compare {
    void minMaxAdd(int x, int y)
    {
        if(x>y)
        {
            System.out.println("Min: " + y + "Max: " + x + "Sum: " + (x+y));
        }
        else if (x < y)
        {
            System.out.println("Min: " + x + "Max: " + y + "Sum: " + (x+y));
        }
        else {
            System.out.println("Equal!" + "Sum: " + (x+y));
        }
    }

    void minMaxAdd(double x, double y)
    {
        if(x>y)
        {
            System.out.println("Min: " + y + "Max: " + x + "Sum: " + (x+y));
        }
        else if (x < y)
        {
            System.out.println("Min: " + x + "Max: " + y + "Sum: " + (x+y));
        }
        else {
            System.out.println("Equal!" + "Sum: " + (x+y));
        }
    }

    void minMaxAdd(char x, char y)
    {
        if(x>y)
        {
            System.out.println("Min: " + y + "Max: " + x + "Sum: " + (x+y));
        }
        else if (x < y)
        {
            System.out.println("Min: " + x + "Max: " + y + "Sum: " + (x+y));
        }
        else {
            System.out.println("Equal!" + "Sum: " + (x+y));
        }
    }
}
