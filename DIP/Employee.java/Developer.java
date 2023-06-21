public class Developer implements Employee {
    public double calculateSalary() {
        // Developer-specific salary calculation logic
        double baseSalary = 4000;
        double bonus = 1000;
        return baseSalary + bonus;
    }
}
