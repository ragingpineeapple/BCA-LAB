class Shape {


    void area(int side) {
        System.out.println("Area of Square: " + (side * side));
    }


    void area(int length, int breadth) {
        System.out.println("Area of Rectangle: " + (length * breadth));
    }


    void area(double radius) {
        double result = Math.PI * radius * radius;
        System.out.println("Area of Circle: " + result);
    }

    public static void main(String[] args) {
        Shape s = new Shape();
        s.area(5);
        s.area(4, 6);
        s.area(3.5);
    }
}
