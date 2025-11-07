import java.io.*;

public class Main
{
    static void main(String[] args) {
        FileWriter fw = null;
        try
        {
            fw = new FileWriter("BOB.txt");
            fw.write(' ');
            fw.close();
        }
        catch (IOException e)
        {
            System.out.println(e.getMessage());
        }
    }
}