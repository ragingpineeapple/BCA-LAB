public class University {
    String name;
    int ranking;

    University(String name, int ranking)
    {
        this.name = name;
        this.ranking = ranking;
    }
    University()
    {
        this("null", 0);
    }

    void Details()
    {
        System.out.println("Uni name: " + name);
        System.out.println("Uni rank: " + ranking);
    }

}
