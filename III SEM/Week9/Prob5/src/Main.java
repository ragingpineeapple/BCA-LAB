import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner scn = new Scanner(System.in);
        char t = 'z';
        Current c = new Current();
        Saving s = new Saving();
        boolean account = false;
        char accounttype = ' ';
        while(t != 'e')
        {   System.out.printf("a.New Savings Account\nb.New Current Account\nc.Deposit\nd.Withdraw\ne.Exit\n:");

            t = scn.nextLine().charAt(0);
            switch(t)
            {
                case 'a':
                    System.out.print("Enter id: " );
                    String id = scn.nextLine();

                    System.out.print("Enter name: ");
                    String name = scn.nextLine();

                    System.out.print("Enter address: ");
                    String address = scn.nextLine();

                    System.out.print("Enter minimum balance: ");
                    int min = scn.nextInt();

                    s.details(id, name, address, min);
                    account = true;
                    accounttype = 's';
                    break;

                case 'b':
                    System.out.print("Enter id: " );
                    String id1 = scn.nextLine();

                    System.out.print("Enter name: ");
                    String name1 = scn.nextLine();

                    System.out.print("Enter address: ");
                    String address1 = scn.nextLine();

                    System.out.print("Enter max withdrawal limit: ");
                    int max = scn.nextInt();

                    c.details(id1, name1, address1, max);
                    account = true;
                    break;
                case 'c':

                    if(!account)
                    {
                        System.out.println("No account found!");
                        break;
                    }
                    else
                    {
                        System.out.print("Enter amount to deposit: ");
                        int dep = scn.nextInt();
                        if(accounttype == 's')
                        {
                            s.deposit(dep);
                        }
                        else
                        {
                            c.deposit(dep);
                        }
                    }
                    break;

                case 'd':
                    if(!account)
                    {
                        System.out.println("No account found!");
                        break;
                    }
                    else
                    {
                        System.out.println("Enter amount to withdraw: ");
                        int with = scn.nextInt();
                        if(accounttype == 's')
                        {
                            s.withdraw(with);
                        }
                        else
                        {
                            c.withdraw(with);
                        }
                    }
                case 'e':
                    break;
                default:
                    System.out.println("Select correct option!");
                    break;
            }
        }






    }
}