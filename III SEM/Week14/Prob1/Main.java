import java.sql.*;
import java.util.Scanner;

public class Main
{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        String url = "jdbc:mysql://localhost:3306/test";
        String username = "root";
        String password = "Ahmadmustafa@Khowaja2005";
        int ra = 0;
        
        try{
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection connection = DriverManager.getConnection(url, username, password);
            Statement statement = connection.createStatement();

            ra = statement.executeUpdate("CREATE TABLE Employees (id INTEGER AUTO_INCREMENT NOT NULL PRIMARY KEY, name TEXT NOT NULL, age INT NOT NULL, salary INT);");
            System.out.printf("Rows affected: %d", ra);

            System.out.print("Enter the number of people: ");
            int x = scanner.nextInt();

            for(int i = 0; i < x; i++)
            {
                System.out.print("Enter name: ");
                String name = scanner.nextLine();
                System.out.print("Enter age: ");
                int age = scanner.nextInt();
                System.out.print("Enter salary: ");
                int salary = scanner.nextInt();

                                
                String sql = String.format("INSERT INTO Employee (name, age, salary) VALUES(%s,%d,%d)", name, age, salary);
                ra = statement.executeUpdate(sql);

                System.out.printf("Rows affected: %d", ra);
            }

            System.out.println("TABLE CONTENTS: ");

            ResultSet resultSet = statement.executeQuery("SELECT * FROM bob");

            while (resultSet.next()) {
                int id = resultSet.getInt("id");
                String name = resultSet.getString("name");
                int age = resultSet.getInt("age");
                int salary = resultSet.getInt("salary");
                
                System.out.println("id: " + id + " | name: " + name + " | age: " + age + " | salary: " + salary);
            }

            System.out.println("DELETING WHERE SALARY IS LESS THAN 200");
            ra = statement.executeUpdate("DELETE * FROM Emplyee WHERE salary<200");

            System.out.printf("Rows affected: %d", ra);


        }
        catch (Exception e)
        {
            System.out.println("Faque " + e);
        }

    }
}