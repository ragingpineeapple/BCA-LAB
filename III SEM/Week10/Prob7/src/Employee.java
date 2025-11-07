class Employee {
    String empName;
    int empId;

    class Salary {
        double basic, hra, pf;

        Salary(double basic, double hra, double pf) {
            this.basic = basic;
            this.hra = hra;
            this.pf = pf;
        }

        void displaySalary() {
            System.out.println("Salary Details:");
            System.out.println("  Basic: " + basic);
            System.out.println("  HRA: " + hra);
            System.out.println("  PF: " + pf);
        }
    }

    class JoiningDate {
        int day, month, year;

        JoiningDate(int day, int month, int year) {
            this.day = day;
            this.month = month;
            this.year = year;
        }

        void displayJoiningDate() {
            System.out.println("Joining Date: " + day + "/" + month + "/" + year);
        }
    }

    Salary salary;
    JoiningDate joiningDate;

    Employee(String name, int id, double basic, double hra, double pf, int day, int month, int year) {
        empName = name;
        empId = id;
        salary = new Salary(basic, hra, pf);
        joiningDate = new JoiningDate(day, month, year);
    }

    void displayEmployee() {
        System.out.println("Employee Name: " + empName);
        System.out.println("Employee ID: " + empId);
        salary.displaySalary();
        joiningDate.displayJoiningDate();
    }

    public static void main(String[] args) {
        Employee e1 = new Employee("Bob", 101, 30000, 5000, 2000, 12, 5, 2023);
        e1.displayEmployee();
    }
}

