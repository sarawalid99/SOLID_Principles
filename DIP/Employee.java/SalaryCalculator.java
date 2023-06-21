public class SalaryCalculator {
    public static double calculateTotalSalary(Employee[] employees) {
        double totalSalary = 0;
        for (Employee employee : employees) {
            totalSalary += employee.calculateSalary();
        }
        return totalSalary;
    }

    public static void main(String[] args) {
        Manager manager = new Manager();
        Developer developer = new Developer();
        Employee[] employees = {manager, developer};

        double totalSalary = calculateTotalSalary(employees);
        System.out.println("Total Salary: " + totalSalary);
    }
}
