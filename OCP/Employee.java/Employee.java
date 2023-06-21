public abstract class Employee {
    private String name;
    private int id;

    public Employee(String name, int id) {
        this.name = name;
        this.id = id;
    }

    public double calculateSalary() {
        double baseSalary = calculateBaseSalary();
        double bonus = calculateBonus();

        double salary = baseSalary + bonus;
        return salary;
    }

    protected abstract double calculateBaseSalary();

    protected abstract double calculateBonus();
}

