import java.io.*;

public class Main{
    public static void main(String[] args)
    {
        FileReader f = null;
        int x = 0;
        try{
            f = new FileReader("File.txt");
            
            while(f.read() != -1)
            {
                x++;
            }
            
            System.out.println(x);

            f.close();
        }
        catch (IOException e)
        {
            
            System.out.println(e.getMessage());
        }
    }
}