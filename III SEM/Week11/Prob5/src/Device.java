public class MultiFunctionMachine implements Scanner,Printer{
    public void connect(){
        System.out.println("Machine connected");
    }
    public void details(){
        Scanner.super.details();
        Printer.super.details();
    }
    void main(String[]args){
        MultiFunctionMachine m = new MultiFunctionMachine();
        m.connect();
        m.details();
    }
}
