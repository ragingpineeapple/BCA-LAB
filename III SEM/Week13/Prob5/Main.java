import java.io.*;

public class Main{
    public static void main(String[] args)
    {
        BufferedReader f = null;
        FileReader filereader = null;
        int x = 0;
        try{
            filereader = new FileReader("File.txt");
            f = new BufferedReader(filereader);
            
            String s = f.readLine();
            while(s != null)
            {
                x++;
                s = f.readLine();
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