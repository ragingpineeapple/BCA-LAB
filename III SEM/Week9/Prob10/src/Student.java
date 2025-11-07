public class Student
{
    int rollNo;
    String name;
    int marks;
    static String schoolName;

    static void changeSchoolName(String newName)
    {
        schoolName = newName;
    }

    Student(int rollNo, String name, int marks) {
        this.rollNo = rollNo;
        this.name = name;
        this.marks = marks;
    }

    public Student() {
        this(0, "NULL", 0);
    }


}
