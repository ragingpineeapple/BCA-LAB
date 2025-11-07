public interface Account {
    void deposit();
    void withdraw();
    static void aboutBank(){
        System.out.println("Bank is in aligarh");
    }
    default void takeLoan(){
        System.out.println("Loan taken!");
    }
}
