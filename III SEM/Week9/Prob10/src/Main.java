public class Main
{
    public static void main(String[] args) {
        Student s1 = new Student(420, "BOB", 99);

        Student.changeSchoolName("GOODSCHOOL");

        Student s2 = new Student(451, "BEN", 49);

        System.out.printf("RollNo: %d\nName: %s\nMarks: %d\n", s1.rollNo, s1.name, s1.marks);
        System.out.printf("RollNo: %d\nName: %s\nMarks: %d\n", s2.rollNo, s2.name, s2.marks);
        System.out.println("School name: " + Student.schoolName);
    }
}