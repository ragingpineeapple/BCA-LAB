import java.io.*;

public class Main{
    public static void main(String[] args)
    {
        FileReader f = null;

        try{
            f = new FileReader("File.txt");
            System.out.println(f.read());
        }
        catch (IOException e)
        {
            System.out.println(e.getMessage());
        }
    }
}