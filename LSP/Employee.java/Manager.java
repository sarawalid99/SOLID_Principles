public class Manager extends Employee {
    private int teamSize;

    public Manager(String name, int id) {
        super(name, id);
        this.teamSize = 0;
    }

    public void setTeamSize(int teamSize) {
        this.teamSize = teamSize;
    }

    @Override
    public double calculateSalary() {
        // Manager-specific salary calculation logic
        double baseSalary = super.calculateSalary();
        double bonus = teamSize * 1000;
        return baseSalary + bonus;
    }
}
