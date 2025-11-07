public class Main {
    public static int divide(int a, int b){
        return a/b;
    }

    static void main() throws ArithmeticException{
        try{
            for (int i = 0; i < 100; i++)
            {
                int red = divide(i+1, i);
            }
        }catch(ArithmeticException e){
            System.out.println("Dividing by zero is not allowed!");
        }
    }
}
