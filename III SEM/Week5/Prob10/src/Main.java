import java.util.Scanner;
public class Main
{
    public static void main(String args[])
    {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter num: ");
        int decimalnum = scanner.nextInt();
        String hexa = "";
        while(decimalnum != 0)
        {
            int digit = decimalnum%16;
            //ASCII value of A is 65. If any number is
            //greater than 9, take for example... 11, we need to output B for that
            //whose ASCII value is 66, so we need to add 1 to 65, now it doesn't matter
            //if we do ``11-10+65`` or just ``11+55``, it yields the same result.
            //After that we just change the data type of the digit to character
            //and add that to the hexa string. It is explicit type casting though.
            if(digit>9)
            {
                hexa = (char) (digit+55) + hexa;
            }
            else
            {
                hexa = digit + hexa;
            }
            decimalnum /= 16;
        }

        System.out.println(hexa);
    }
}