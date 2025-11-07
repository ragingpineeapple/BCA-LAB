import java.io.FileNotFoundException;
import java.io.FileReader;

public class Main {
    void method1(){
        System.out.println("Printing something");
    }
    void method2(){
        method1();
    }
    void method3() throws FileNotFoundException {
        FileReader f = new FileReader("a.txt");
        method2();
    }
    void main() {
        try{
            method3();
        }catch(FileNotFoundException f){
            System.out.println("File not found :(");
        }
    }


}
