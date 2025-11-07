public class BuySomething implements Scooty,Bike{
    public void offer(){
        System.out.println("50% offer on buying 2 two-wheeler");
    }
    public void details(){
        System.out.println("Details....");
        Bike.super.details();
        Scooty.super.details();
    }
    void main(String[]args){
        BuySomething b = new BuySomething();
        b.details();
        b.offer();
    }
}


