public class Developer extends Employee {
    private String language;

    public Developer(String name, int id) {
        super(name, id);
        this.language = "";
    }

    public void setLanguage(String language) {
        this.language = language;
    }

    @Override
    public double calculateSalary() {
        // Developer-specific salary calculation logic
        double baseSalary = super.calculateSalary();
        double bonus = language.equals("Python") ? 1000 : 500;
        return baseSalary + bonus;
    }
}
