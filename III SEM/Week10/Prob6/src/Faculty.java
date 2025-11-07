public class Faculty extends University{
    String name;
    Faculty(String name,String uniName,int ranking){
        this.name = name;
        super(uniName,ranking);
    }
    void Details(){
        System.out.println("Faculty name: "+name);
        System.out.println("University name: " + uniName);
        System.out.println("University ranking: "+ranking);
    }
}
