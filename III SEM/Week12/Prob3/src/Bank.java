public class Bank {
    int balance;
    Bank(int balance){
        this.balance = balance;
    }
    void withdraw(int amount) throws InsufficientFundsException{
        if(amount>balance){
            throw new InsufficientFundsException();
        }
        else{
            balance -= amount;
        }
    }

    public static void main(String[]args) throws InsufficientFundsException{
        Bank b = new Bank(1000);
        b.withdraw(1100);
    }
}
