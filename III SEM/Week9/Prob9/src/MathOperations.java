public class MathOperations {
    static int findGCD(int a, int b)
    {
        if(b>a)
        {
            a = a+b;
            b = a-b;
            a = a-b;
        }

        if(b == 0)
        {
            return a;
        }
        return findGCD(b, a%b);
    }

    static int findLCM(int a, int b)
    {
        return (a * b)/findGCD(a, b);
    }

}
