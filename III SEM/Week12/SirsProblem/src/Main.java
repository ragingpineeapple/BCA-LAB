import java.util.Scanner;
import java.io.*;

public class Main
{
    class PrimeNumberException extends Exception
    {
        PrimeNumberException(String message)
        {
            super(message);
        }
    }

    void isprime(int x) throws PrimeNumberException
    {
        boolean isprime = true;
        for(int i = 2; i <= x/2; i++)
        {
            if(x%i == 0)
            {
                isprime = false;
            }
        }
        if(isprime)
        {
            throw new PrimeNumberException("Prime Number");
        }
    }
    void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        FileReader f = null;
        FileWriter fw = null;

        System.out.println("Enter number to divide: ");
        int b = scn.nextInt();

        try
        {
            f = new FileReader("numbers.txt");
            fw = new FileWriter("divided.txt");
            fw.write(' ');
            int x = f.read();
            while(x != -1)
            {
                try
                {
                    x = (x - '0');

                    isprime(x);
                    System.out.println(x);
                    try
                    {
                        if(x%b == 0)
                        {
                            x = (x + '0');
                            fw.write(x);
                        }

                    }
                    catch (ArithmeticException a)
                    {
                        System.out.println(a.getMessage());
                    }
                }
                catch (PrimeNumberException p)
                {
                    System.out.println("Prime number encountered, not divisible");
                }
                finally
                {
                    x = f.read();

                }
            }
            f.close();
            fw.close();

        }
        catch (IOException e)
        {
            System.out.println("Error:" + e.getMessage());
        }

    }
}