public interface Printer {
    void connect();
    default void details(){
        System.out.println("Printer working!");
    }
}
