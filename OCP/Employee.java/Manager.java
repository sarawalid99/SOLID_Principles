public class Manager extends Employee {
    public Manager(String name, int id) {
        super(name, id);
    }

    @Override
    protected double calculateBonus() {
        // Calculate bonus for a manager based on specific rules
        return 0.1 * calculateBaseSalary();
    }

    @Override
    protected double calculateBaseSalary() {
        // Calculate base salary for a manager based on specific rules
        return 5000;
    }
}
