public class Department extends Faculty{
    String depName;
    String chairMan;
    Department(String depName,String chairMan,String name,String uniName,int ranking){
        super(name,uniName,ranking);
        this.depName = depName;
        this.chairMan = chairMan;
    }
    void Details(){
        System.out.println("Department name: "+depName);
        System.out.println("Chairman: "+chairMan);
    }
    void Display(){
        Details();
        super.Details();
    }
}

