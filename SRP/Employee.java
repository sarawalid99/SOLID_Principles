public class Employee {
    private String name;
    private int id;

    public Employee(String name, int id) {
        this.name = name;
        this.id = id;
    }

    public double calculateSalary() {
        // Salary calculation logic based on employee's experience and position
        int experience = getExperience();
        String position = getPosition();

        double baseSalary;
        if (position.equals("Manager")) {
            baseSalary = 5000;
        } else if (position.equals("Developer")) {
            baseSalary = 3000;
        } else {
            baseSalary = 2000;
        }

        double salary = baseSalary + (experience * 100);
        return salary;
    }

    private int getExperience() {
        // Fetch employee's experience from the database
        // For demonstration purposes, let's assume it returns a random value
        return 5;
    }

    private String getPosition() {
        // Fetch employee's position from the database
        // For demonstration purposes, let's assume it returns a random position
        return "Developer";
    }

    public void saveToDatabase() {
        // Saving employee data to the database
        // For demonstration purposes, let's assume it prints the employee's details
        System.out.println("Saving " + name + " (" + id + ") to the database.");
    }
}
