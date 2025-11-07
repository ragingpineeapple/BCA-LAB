import java.util.Scanner;

public class Age {
    static void ageCheck(int age) throws InvalidAgeException{
        if(age<18){
            throw new InvalidAgeException("Not eligible (below 18 years)");
        }
        else{
            System.out.println("Valid age");
        }
    }
    static void main() throws InvalidAgeException {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter age: ");
        int age = sc.nextInt();
        try{
            ageCheck(age);
        }catch(InvalidAgeException e){
            System.out.println("Error caught: "+e.getMessage());
        }
    }
}
