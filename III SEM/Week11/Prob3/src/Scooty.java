public interface Scooty {
    void offer();
    default void details(){
        System.out.println("Scooty is at 10% off");
    }
}
