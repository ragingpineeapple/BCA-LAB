public class Manager extends Employee{
    String department;
    Manager(String name, int salary, String department)
    {
        super(name, salary);
        this.department = department;
    }
    Manager()
    {
        super();
        this.department = "NULL";
    }
    void showDetails()
    {
        super.showDetails();
        System.out.println("Department: " + department);
    }
}
