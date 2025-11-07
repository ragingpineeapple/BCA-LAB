class Vehicle {
    void run() {
        System.out.println("Vehicle is running");
    }
}

class Bike extends Vehicle {
    void run() {
        System.out.println("Bike is running safely");
    }
}

class Car extends Vehicle {
    void run() {
        System.out.println("Car is running smoothly");
    }
}

class Main {
    public static void main(String[] args) {
        Vehicle v;

        v = new Bike();
        v.run();

        v = new Car();
        v.run();
    }
}

