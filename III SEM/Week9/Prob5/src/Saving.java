public class Saving extends Account{
    int Min_balance;

    Saving(String id, String account_holder_name, String address, int Min_balance)
    {
        super(id, account_holder_name, address);
        this.Min_balance = Min_balance;
    }
    Saving(int Min_balance)
    {
        this("NULL", "NULL", "NULL", Min_balance);
    }
    Saving()
    {
        this("NULL", "NULL", "NULL", 0);
    }

    void details(String id, String account_holder_name, String address, int Min_balance)
    {
        super.id = id;
        super.account_holder_name = account_holder_name;
        super.address = address;
        this.Min_balance = Min_balance;
    }


    void deposit(int dep)
    {
        bal += dep;
    }

    int withdraw(int with)
    {
        if(bal-with<Min_balance)
        {
            System.out.println("Can't withdraw, minimum balance limit will be exceeded!");
            System.out.println("Balance: " + bal);
            return 0;
        }
        bal -= with;
        return with;
    }
    void Display()
    {
        System.out.println("ID: " +id);
        System.out.println("Holder name: " + account_holder_name);
        System.out.println("Balance: " + bal);
    }
}
