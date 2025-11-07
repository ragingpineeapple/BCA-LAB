import java.util.Locale;

public class Current extends Account{

    int Max_withdrawl_limit;

    Current(String id, String account_holder_name, String address, int Max_withdrawl_limit)
    {
        super(id, account_holder_name, address);
        this.Max_withdrawl_limit = Max_withdrawl_limit;
    }
    Current(int Max_withdrawl_limit)
    {
        this("NULL", "NULL", "NULL", Max_withdrawl_limit);
    }
    Current()
    {
        this("NULL", "NULL", "NULL", 0);
    }

    void details(String id, String account_holder_name, String address, int Max_withdrawl_limit)
    {
        super.id = id;
        super.account_holder_name = account_holder_name;
        super.address = address;
        this.Max_withdrawl_limit = Max_withdrawl_limit;
    }

    void deposit(int dep)
    {
        bal += dep;
    }

    int withdraw(int with)
    {
        if(with>Max_withdrawl_limit)
        {
            System.out.println("Max withdrawl limit is: " + Max_withdrawl_limit);
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
