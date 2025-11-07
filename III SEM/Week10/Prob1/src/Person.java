import java.util.Date;

public class Person {
    String name;
    int phone;

    public class Address
    {
        int house_no;
        String street, city, state;

        Address(int house_no, String street, String city, String state)
        {
            this.house_no = house_no;
            this.street = street;
            this.city = city;
            this.state = state;
        }
        Address()
        {
            this(0, "NULL", "NULL", "NULL");
        }

        void displayAddr()
        {
            System.out.printf("%d, %s, %s, %s", house_no, street, city, state);
        }

    }

    public class DateOfBirth
    {
        int day, month, year;

        DateOfBirth(int day, int month, int year)
        {
            this.day = day;
            this.month = month;
            this.year = year;
        }
        DateOfBirth()
        {
            this(0, 0, 0);
        }

        void displayDOB()
        {
            System.out.printf("%d - %d - %d", day, month, year);
        }
    }

    Person(String name, int phone)
    {
        this.name = name;
        this.phone = phone;

    }

    void Display(Address addr, DateOfBirth dob)
    {
        System.out.printf("Name: %s\nPhoneNo: %d\nAddress:", name, phone);
        addr.displayAddr();
        System.out.printf("\nDate of birth:");
        dob.displayDOB();
        System.out.println();
    }

}
