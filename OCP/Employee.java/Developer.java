public class Developer extends Employee {
    public Developer(String name, int id) {
        super(name, id);
    }

    @Override
    protected double calculateBonus() {
        // Calculate bonus for a developer based on specific rules
        return 0.05 * calculateBaseSalary();
    }

    @Override
    protected double calculateBaseSalary() {
        // Calculate base salary for a developer based on specific rules
        return 3000;
    }
}
