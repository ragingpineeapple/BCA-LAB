abstract public class Account {
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

    abstract void deposit(int dep);

    abstract int withdraw(int with);

    abstract void Display();


}
