import java.sql.SQLOutput;

public class Main {

    public static boolean prim(int x)
    {
        if(x == 0 || x == 1)
        {
            return false;
        }
        for(int i = 2; i <= x/2; i++)
        {
            if(x%i == 0)
            {
                return false;
            }
        }
        return true;
    }


    public static void main(String[] args)
    {
        boolean prim = true;
        for(int i = 0;i<=100;i++)
        {
            if(prim(i))
            {
                System.out.println(i);
            }
        }
    }
}
