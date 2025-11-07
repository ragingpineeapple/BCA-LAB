public class Faculty extends University{
    String name;
    Faculty(String name, String uniname, int rank)
    {
        super(uniname, rank);
        this.name = name;
    }
    Faculty(String name)
    {
        this(name, "NULL", 0);
    }
    Faculty()
    {
        this("NULL", "NULL", 0);
    }

    void Details()
    {
        //super.Details();
        System.out.println("Faculty name: " + name);
    }

}
