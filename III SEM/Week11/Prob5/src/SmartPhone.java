public class SmartPhone implements SmartDevice{
    public void powerOn(){
        System.out.println("Power On!");
    }
    public void connectWifi(){
        System.out.println("Wifi connected!");
    }
    void main(String[]args){
        SmartPhone s = new SmartPhone();
        s.connectWifi();
        s.powerOn();
    }
}
