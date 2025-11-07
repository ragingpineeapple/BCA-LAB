public class Main
{
    static void main(String[] args) {
        Person p = new Person("BOB", 1234);
        Person.Address a = p.new Address(1, "STRT", "CITY", "STS");
        Person.DateOfBirth d = p.new DateOfBirth(9, 6, 2005);

        p.Display(a, d);
    }
}
