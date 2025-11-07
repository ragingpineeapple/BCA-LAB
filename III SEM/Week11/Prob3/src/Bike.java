public interface Bike {
    void offer();
    default void details(){
        System.out.println("Bikes are at 20% off");
    }
}
