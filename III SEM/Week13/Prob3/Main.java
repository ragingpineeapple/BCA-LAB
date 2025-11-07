import java.io.*;

public class Main{
    public static void main(String[] args)
    {
        FileReader f = null;
        FileWriter fw = null;

        try{
            f = new FileReader("File.txt");
            fw = new FileWriter("Copied.txt");
            fw.write(' ');

            int c = f.read();
            while(c != -1)
            {
                fw.append((char)c);
                c = f.read();
            }
            
            System.out.println(f.read());
            fw.close();
            f.close();
        }
        catch (IOException e)
        {
            
            System.out.println(e.getMessage());
        }
    }
}