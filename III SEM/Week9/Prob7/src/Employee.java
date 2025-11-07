public class Employee {
    String name;
    int salary;

    Employee(String name, int salary)
    {
        this.name = name;
        this.salary = salary;
    }
    Employee()
    {
        this("NULL", 0);
    }
    void showDetails()
    {
        System.out.println("Name: " + name);
        System.out.println("Salary: " + salary);
    }

}
