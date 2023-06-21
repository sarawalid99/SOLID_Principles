public class Manager implements Employee {
    public double calculateSalary() {
        // Manager-specific salary calculation logic
        double baseSalary = 5000;
        double bonus = 2000;
        return baseSalary + bonus;
    }
}
