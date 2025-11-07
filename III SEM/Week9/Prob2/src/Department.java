public class Department extends Faculty {
    String name;
    String chairman;

    void Details()
    {
        System.out.println("Dept name: " + name);
        System.out.println("Charman name: " + chairman);
    }

    void Display()
    {
        super.Details();
        Details();
    }

    Department(String name, String chairman, String faculty, String uniname, int rank)
    {
        super(faculty, uniname, rank);
        this.name = name;
        this.chairman = chairman;

    }

    Department(String name, String chairman)
    {
        this(name, chairman, "NULL", "NULL", 0);
    }

    Department()
    {
        this("NULL", "NULL", "NULL", "NULL", 0);
    }

}
