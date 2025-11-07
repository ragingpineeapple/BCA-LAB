public class Account {
    String id;
    String account_holder_name;
    String address;
    int bal;

    Account(String id, String account_holder_name, String address)
    {
        this.id = id;
        this.account_holder_name = account_holder_name;
        this.address = address;
    }
    Account(String id, String account_holder_name)
    {
        this(id, account_holder_name, "NULL");
    }
    Account()
    {
        this("NULL", "NULL", "NULL");
    }

    void deposit(int dep)
    {
        bal += dep;
    }

    int withdraw(int with)
    {
        bal -= with;
        return with;
    }

    void Details()
    {
        System.out.println("ID: " +id);
        System.out.println("Holder name: " + account_holder_name);
    }


    void Display()
    {
        Details();
        System.out.println("Balance: " + bal);
    }

    static double calculateSimpleInterest(double P, double R, double T)
    {
        return (P*R*T)/100;
    }

    static double calculateCompoundInterest(double P, double r, double n, double t)
    {
        return Math.pow((P*(1+(r/n))), (n*t));
    }


}
